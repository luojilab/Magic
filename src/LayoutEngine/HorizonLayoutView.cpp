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
    m_widgets(QList<QWidget *>()),
    m_mainWidgetSize(size),
    m_subWidgetMiniWidth(miniWidth)
{
}

HorizonLayoutView::~HorizonLayoutView()
{
    m_widgets.clear();
}

void HorizonLayoutView::resizeEvent(QResizeEvent *event)
{
    if (m_widgets.count() == 0) {
        return;
    }
    QWidget* mainW = m_widgets[0];
    QWidget* tableOfContent = m_widgets[1];
    if ( event->size().width() > m_mainWidgetSize.width() + m_subWidgetMiniWidth ) {
        mainW->setGeometry(0, 0, m_mainWidgetSize.width(), m_mainWidgetSize.height());
        tableOfContent->setGeometry(m_mainWidgetSize.width(), 0, event->size().width() - m_mainWidgetSize.width(), m_mainWidgetSize.height());
    }
}

void HorizonLayoutView::addWidgets(QList<QWidget *>ws)
{
    for( QWidget *w : ws ) {
        if ( w && !m_widgets.contains(w) ) {
            m_widgets<<w;
            w->setParent(this);
        }
    }
}

QSize HorizonLayoutView::sizeHint()
{
    return m_mainWidgetSize * 2;
}

void HorizonLayoutView::setDefaultMainSize(QSize size)
{
    m_mainWidgetSize = size;
}
