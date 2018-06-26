//
//  BookViewManager.hpp
//  Sigil
//
//  Created by 1m0nster on 2018/6/25.
//

#ifndef BookViewManager_hpp
#define BookViewManager_hpp

#include <stdio.h>
#include <functional>
#include "BookReader.h"

class QWidget;

class BookViewManager {
    
public:
    BookViewManager(QWidget *hostView);
    void setBookReader(future_core::BookReader*);
    void setUpdateViewCallback(std::function<void()>);
    void onDraw();
    
private:
    QWidget *m_hostView{ NULL };
    future_core::BookReader *m_bookReader{ NULL };
    std::function<void()>m_updateViewCallback;
    
private:
    void updateViewCallback();
};

#endif /* BookViewManager_hpp */
