//
//  HorizonLayoutView.cpp
//  sigilgumbo
//
//  Created by 1m0nster on 2018/6/15.
//

#include "HorizonLayoutView.h"
#include <QHBoxLayout>
#include <QResizeEvent>

HorizonLayoutView::HorizonLayoutView(QSize size, int miniWidth):
    m_mainWidgetSize(size),
    m_layout(new QHBoxLayout())
{
    m_layout->setSpacing(0);
    m_layout->setMargin(0);
}

HorizonLayoutView::~HorizonLayoutView()
{
    delete m_layout;
}

void HorizonLayoutView::addWidgets(QList<QWidget *>ws)
{
    for( QWidget *w : ws ) {
        if ( w && !m_widgets.contains(w) ) {
            m_layout->addWidget(w);
        }
    }
    setLayout(m_layout);
}
