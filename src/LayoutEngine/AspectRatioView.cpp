#include "AspectRatioView.h"
#include <QResizeEvent>
#include <QScreen>
#include <QApplication>
#include <QPushButton>

AspectRatioView::~AspectRatioView()
{
	delete m_layout;
}

AspectRatioView::AspectRatioView(QWidget * contentView, float scale):
	m_contentView(contentView),
	m_scale(scale),
	m_layout(new QGridLayout),
	m_topPadding(new QSpacerItem(0,0)),
	m_leftPadding(new QSpacerItem(0,0)),
	m_rightPadding(new QSpacerItem(0,0)),
	m_bottomPadding(new QSpacerItem(0,0))
{
	Q_ASSERT(contentView);
	m_layout->addItem(m_leftPadding, 1, 0);
	m_layout->addItem(m_rightPadding, 1, 2);
	m_layout->addItem(m_bottomPadding, 2, 1);
	m_layout->addWidget(m_contentView, 1, 1);
	setLayout(m_layout);
}

void AspectRatioView::setMinContentSize(QSize size)
{
	m_layout->setColumnMinimumWidth(1, size.width() / 2);
}

void AspectRatioView::addTopWidget(QWidget *widget)
{
	if (m_top_w) {
		m_layout->removeWidget(m_top_w);
	}
	if (m_layout) {
		m_layout->addWidget(widget, 0, 1);
		m_top_w = widget;
	}
}

void AspectRatioView::addRightWidget(QWidget *w)
{
	if (m_right_w) {
		m_layout->removeWidget(m_right_w);
	}
	if (m_layout) {
		m_layout->addWidget(w, 1, 2);
		m_right_w = w;
	}
}

void AspectRatioView::resizeEvent(QResizeEvent *event)
{
	float currentScale = float(event->size().width()) / event->size().height();
	if (currentScale <= m_scale) {
		m_layout->setColumnStretch(0, 0);
		m_layout->setColumnStretch(1, event->size().width());
		m_layout->setColumnStretch(2, 0);
		float height = event->size().width() / m_scale;
		m_layout->setRowStretch(0, (event->size().height() - height) / 2);
		m_layout->setRowStretch(1, height);
		m_layout->setRowStretch(2, (event->size().height() - height) / 2);
	} else {
		m_layout->setRowStretch(0, 0);
		m_layout->setRowStretch(1, event->size().height());
		m_layout->setRowStretch(2, 0);
		float width = event->size().height() * m_scale;
		m_layout->setColumnStretch(0, (event->size().width() - width) / 2);
		m_layout->setColumnStretch(1, width);
		m_layout->setColumnStretch(2, (event->size().width() - width) / 2);
	}
}