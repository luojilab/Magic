#pragma once
#include <QWidget>
class QPushButton;
class QBoxLayout;

class ButtonCollectionView: public QWidget
{
	Q_OBJECT

public:
	ButtonCollectionView(QStringList texts);
	~ButtonCollectionView();
signals:
	void buttonClick(int);

private slots:
	void buttonClicked(bool clicked);

private:
	std::vector<QPushButton *>m_buttons;
	QBoxLayout *m_layout;
};

