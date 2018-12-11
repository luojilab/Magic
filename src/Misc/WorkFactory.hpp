//
//  WorkFactory.hpp
//  Magic
//
//  Created by 1m0nster on 2018/12/5.
//

#ifndef WorkFactory_hpp
#define WorkFactory_hpp

#include <stdio.h>
#include <functional>
#include <list>
#include <QThread>
#include <QSemaphore>

/*
 *
 * WorkHorse Class Def
 *
 */

template<typename RT>
class WorkHorse : public QThread {
    
public:
    WorkHorse(QSemaphore& semaphore, std::list<std::function<RT()> >&& works):
        m_semaphore(semaphore),
        m_works(works) {
    };
    virtual ~WorkHorse() {};
    std::list<RT> getResults() {
        return m_results;
    };
    
protected:
    virtual void run() {
//        m_semaphore.acquire(1);
        for (std::function<RT()>f : m_works) {
            m_results.push_back(f());
        }
        m_semaphore.release(1);
    }
    
private:
    QSemaphore& m_semaphore;
    std::list<RT> m_results;
    std::list<std::function<RT()> > m_works;
};

/*
 *
 * WorkFactory Class Def
 *
 */

template<typename RT, int HorseCNT = -1>
class WorkFactory {
    
private:
    enum DefaultWorkhorsePatament {DefaultCnt = 4};
    
public:
    WorkFactory():
        m_horseCnt(HorseCNT <= 0 || QThread::idealThreadCount() == -1 ? DefaultCnt : HorseCNT) {
    }
    
    void addWork(const std::function<RT()>& work) {
        m_works.push_back(std::move(work));
    }
    
    void addWork(std::function<RT()>&& work) {
        m_works.push_back(std::move(work));
    }
    void waitTillFinish();
    
    std::list<RT> getResults() {
        return m_results;
    }
    
private:
    int m_horseCnt {0};
    std::list<std::function<RT()> > m_works;
    std::list<RT> m_results;
};

template <typename RT, int HorseCNT>
void WorkFactory<RT, HorseCNT>::waitTillFinish() {
    m_results.clear();
    if (m_works.empty()) {
        return;
    }
    QSemaphore semaphore;
    std::list<WorkHorse<RT> *>horses;
    auto it = m_works.begin();
    auto end = it;
    size_t currentIdx = 0;
    int clusterSize = m_works.size() / m_horseCnt;
    for (int i = 0; i < m_horseCnt; i++) {
        if (currentIdx + clusterSize > m_works.size()) {
            end = m_works.end();
        } else {
            std::advance(end, clusterSize);
        }
        WorkHorse<RT>* horse = new WorkHorse<RT>(semaphore, std::list<std::function<RT()> >(it, end));
        horses.push_back(horse);
        it = end;
    }
    for (WorkHorse<RT>* horse : horses) {
        horse->start();
    }
//    semaphore.release(m_horseCnt);
    semaphore.acquire(m_horseCnt);
    for (WorkHorse<RT>* horse : horses) {
        std::list<RT> results(horse->getResults());
        for (RT rt : results) {
            m_results.insert(m_results.end(), std::move(rt));
        }
    }
}

#endif /* WorkFactory_hpp */
