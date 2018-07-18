//
//  HorizonLayoutView.hpp
//  sigilgumbo
//
//  Created by 1m0nster on 2018/6/15.
//

#ifndef HorizonLayoutView_hpp
#define HorizonLayoutView_hpp

#include <stdio.h>
#include <QWidget>

class QHBoxLayout;
class QResizeEvent;
class HorizonLayoutView: public QWidget {
    
public:
    explicit HorizonLayoutView(QSize, int);
    ~HorizonLayoutView();
    void addWidgets(QList<QWidget *>);
    
private:
    QList<QWidget *>m_widgets;
    QSize m_mainWidgetSize;
    QHBoxLayout* m_layout;
};
#endif /* HorizonLayoutView_hpp */
