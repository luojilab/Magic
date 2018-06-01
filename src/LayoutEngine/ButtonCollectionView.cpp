#include "ButtonCollectionView.h"
#include <QBoxLayout>
#include <QPushButton>

ButtonCollectionView::ButtonCollectionView(QStringList texts):
	QWidget(),
	m_buttons(std::vector<QPushButton *>()),
	m_layout(new QBoxLayout(QBoxLayout::LeftToRight))
{
	if ( texts.length() > 0 ) {
		QStringList::iterator it = texts.begin();
		texts[0].toStdString();
		texts[1].toStdString();
		texts[2].toStdString();
		while (it != texts.end()) {
			QPushButton *bt = new QPushButton(*it++);
			m_buttons.push_back(bt);
			m_layout->addWidget(bt);
			connect(bt, SIGNAL(clicked(bool)), this, SLOT(buttonClicked(bool)));
		}
		setLayout(m_layout);
	}
}

ButtonCollectionView::~ButtonCollectionView()
{
	for (QPushButton *bt : m_buttons) {
		delete bt;
	}
	m_buttons.clear();
	delete m_layout;
}


void ButtonCollectionView::buttonClicked(bool clicked) {
	QObject *bt = sender();
	std::vector<QPushButton *>::iterator it = m_buttons.begin();
	int idx = -1;
	while (it != m_buttons.end()) {
		++idx;
		if (*it++ != bt) { continue; }
		break;
	}
	if (idx != -1) {
		emit buttonClick(idx);
	}
}