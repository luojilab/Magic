#pragma once
#include <QWidget>
#include <QSpacerItem>
#include <QGridLayout>

class AspectRatioView: public QWidget
{
public:
	~AspectRatioView();
	AspectRatioView(QWidget *contentView, float scale);
	void setMinContentSize(QSize);
	void addTopWidget(QWidget *);
	void addRightWidget(QWidget *);
protected:
	void resizeEvent(QResizeEvent *);
private:
	QSpacerItem *m_topPadding;
	QSpacerItem *m_leftPadding;
	QSpacerItem *m_rightPadding;
	QSpacerItem *m_bottomPadding;
	QGridLayout *m_layout;
	QWidget		*m_contentView;
	QWidget		*m_top_w;
	QWidget		*m_right_w;
	float		 m_scale;
};

