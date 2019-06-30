#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_MainWindows.h"
#include "iconhelper.h"
#include "ProductInspectionWidget.h"
class MainWindows : public QMainWindow
{
	Q_OBJECT

public:
	MainWindows(QWidget *parent = Q_NULLPTR);
private slots:
	void initForm();
	void buttonClick();
	void initLeftMain();
	void initLeftConfig();
	void leftMainClick();
	void leftConfigClick();

	void on_btnMenu_Min_clicked();
	void on_btnMenu_Max_clicked();
	void on_btnMenu_Close_clicked();

private:
	Ui::MainWindowsClass ui;

	void makeProductWidget();
	void makeConfigWidget();
	void makeMotionWidget();
	void makeMotorWidget();
	void makeDebugWidget();
	QList<int> pixCharMain;
	QList<QToolButton *> btnsMain;

	QList<int> pixCharConfig;
	QList<QToolButton *> btnsConfig;
	QWidget *wid;
	ProductInspectionWidget *m_product;

};
