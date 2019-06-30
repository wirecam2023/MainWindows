#include "MainWindows.h"

MainWindows::MainWindows(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	initForm();
	initLeftMain();
	initLeftConfig();

	makeProductWidget();
	makeConfigWidget();
	makeMotionWidget();
	makeMotorWidget();
	makeDebugWidget();

	//ui.widgetTitle->setPalette(QPalette(QColor(228,228,228)));
	connect(ui.btnMenu_Min, &QToolButton::clicked, this, &MainWindows::on_btnMenu_Min_clicked);
	connect(ui.btnMenu_Max, &QToolButton::clicked, this, &MainWindows::on_btnMenu_Max_clicked);
	connect(ui.btnMenu_Close, &QToolButton::clicked, this, &MainWindows::on_btnMenu_Close_clicked);



}

void MainWindows::initForm()
{
	this->setProperty("form", true);
	this->setProperty("canMove", true);
	this->setWindowFlags(Qt::FramelessWindowHint | Qt::WindowSystemMenuHint | Qt::WindowMinMaxButtonsHint);

	QPixmap pix(":/MainWindows/image/anda.png");
	ui.labIco->setPixmap(pix);
	IconHelper::Instance()->setIcon(ui.btnMenu_Min, QChar(0xf068));
	IconHelper::Instance()->setIcon(ui.btnMenu_Max, QChar(0xf067));
	IconHelper::Instance()->setIcon(ui.btnMenu_Close, QChar(0xf00d));

	//ui.widgetMenu->setVisible(false);
	ui.widgetTitle->setProperty("form", "title");
	ui.widgetTop->setProperty("nav", "top");
	ui.labTitle->setText(QString::fromStdWString(L"激光曝光机运控平台"));
	ui.labTitle->setFont(QFont("Microsoft Yahei", 20));
	this->setWindowTitle(ui.labTitle->text());

	ui.stackedWidget->setStyleSheet("QLabel{font:10pt;}");

	QSize icoSize(32, 32);
	int icoWidth = 85;

	//设置顶部导航按钮
	QList<QToolButton *> tbtns = ui.widgetTop->findChildren<QToolButton *>();
	foreach(QToolButton *btn, tbtns) {
		btn->setIconSize(icoSize);
		btn->setMinimumWidth(icoWidth);
		btn->setCheckable(true);
		connect(btn, SIGNAL(clicked()), this, SLOT(buttonClick()));
	}

	ui.btnProduct->click();

	ui.widgetLeftMain->setProperty("flag", "left");
	ui.widgetLeftConfig->setProperty("flag", "left");
	ui.page1->setStyleSheet(QString("QWidget[flag=\"left\"] QAbstractButton{min-height:%1px;max-height:%1px;}").arg(60));
	ui.page2->setStyleSheet(QString("QWidget[flag=\"left\"] QAbstractButton{min-height:%1px;max-height:%1px;}").arg(20));ui.page1->setStyleSheet(QString("QWidget[flag=\"left\"] QAbstractButton{min-height:%1px;max-height:%1px;}").arg(60));
	
}


void MainWindows::buttonClick()
{
	QToolButton *b = (QToolButton *)sender();
	QString name = QString::fromLocal8Bit(b->text().toLocal8Bit());

	QList<QToolButton *> tbtns = ui.widgetTop->findChildren<QToolButton *>();
	foreach(QToolButton *btn, tbtns) {
		if (btn == b) {
			btn->setChecked(true);
		}
		else {
			btn->setChecked(false);
		}
	}

	if (name == QString::fromStdWString(L"生产界面")) {
		ui.stackedWidget->setCurrentIndex(0);
	}
	else if (name == QString::fromStdWString(L"系统设置")) {
		ui.stackedWidget->setCurrentIndex(1);
	}
	else if (name == QString::fromStdWString(L"运控配置")) {
		ui.stackedWidget->setCurrentIndex(2);
	}
	else if (name == QString::fromStdWString(L"马达配置")) {
		ui.stackedWidget->setCurrentIndex(3);
	}
	else if (name == QString::fromStdWString(L"调试帮助")) {
		ui.stackedWidget->setCurrentIndex(4);
	}
	else if (name == QString::fromStdWString(L"用户退出")) {
		exit(0);
	}
}

void MainWindows::initLeftMain()
{
	pixCharMain << 0xf0cb << 0xf7b << 0xf247<< 0xf055 << 0xf05a << 0xf249<< 0xf031;
	btnsMain << ui.addPosition << ui.addInput << ui.addOutput << ui.Vaccum << ui.Devacuum << ui.MotorFixed << ui.MotorRelax;
	
	int count = btnsMain.count();
	for (int i = 0; i < count; i++) {
		btnsMain.at(i)->setCheckable(true);
		btnsMain.at(i)->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
		connect(btnsMain.at(i), SIGNAL(clicked(bool)), this, SLOT(leftMainClick()));
	}

	IconHelper::Instance()->setStyle(ui.widgetLeftMain, btnsMain, pixCharMain, 15, 50, 25, "left", 4);

	ui.addPosition->click();
}

void MainWindows::initLeftConfig()
{
	pixCharConfig << 0xf031 << 0xf036 << 0xf249 << 0xf055 << 0xf05a << 0xf249;
	btnsConfig << ui.tbtnConfig1 << ui.tbtnConfig2 << ui.tbtnConfig3 << ui.tbtnConfig4 << ui.tbtnConfig5 << ui.tbtnConfig6;

	int count = btnsConfig.count();
	for (int i = 0; i < count; i++) {
		btnsConfig.at(i)->setCheckable(true);
		btnsConfig.at(i)->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
		connect(btnsConfig.at(i), SIGNAL(clicked(bool)), this, SLOT(leftConfigClick()));
	}
	//10,20,15
	IconHelper::Instance()->setStyle(ui.widgetLeftConfig, btnsConfig, pixCharConfig, 10/*字体*/, 20/*高度*/, 15/*宽度*/, "left", 5);

	ui.tbtnConfig1->click();
}

void MainWindows::leftMainClick()
{
	QToolButton *b = (QToolButton *)sender();
	QString name = b->text();

	int count = btnsMain.count();
	for (int i = 0; i < count; i++) {
		if (btnsMain.at(i) == b) {
			btnsMain.at(i)->setChecked(true);
			btnsMain.at(i)->setIcon(QIcon(IconHelper::Instance()->getPixmap(btnsMain.at(i), false)));
		}
		else {
			btnsMain.at(i)->setChecked(false);
			btnsMain.at(i)->setIcon(QIcon(IconHelper::Instance()->getPixmap(btnsMain.at(i), true)));
		}
	}

}

void MainWindows::leftConfigClick()
{
	QToolButton *b = (QToolButton *)sender();
	QString name = b->text();

	int count = btnsConfig.count();
	for (int i = 0; i < count; i++) {
		if (btnsConfig.at(i) == b) {
			btnsConfig.at(i)->setChecked(true);
			btnsConfig.at(i)->setIcon(QIcon(IconHelper::Instance()->getPixmap(btnsConfig.at(i), false)));
		}
		else {
			btnsConfig.at(i)->setChecked(false);
			btnsConfig.at(i)->setIcon(QIcon(IconHelper::Instance()->getPixmap(btnsConfig.at(i), true)));
		}
	}


}

void MainWindows::on_btnMenu_Min_clicked()
{
	showMinimized();
}

void MainWindows::on_btnMenu_Max_clicked()
{
	static bool max = false;
	static QRect location = this->geometry();

	if (max) {
		this->setGeometry(location);
	}
	else {
		location = this->geometry();
		//this->showMaximized();
		QRect rect = qApp->desktop()->availableGeometry();
		this->setGeometry(rect);
	}

	this->setProperty("canMove", max);
	max = !max;
}

void MainWindows::on_btnMenu_Close_clicked()
{
	close();
}

void MainWindows::makeProductWidget()
{	
	m_product = new ProductInspectionWidget(this);
	QHBoxLayout *hlay = new QHBoxLayout();
	m_product->setContentsMargins(0, 0, 0, 0);
	hlay->setMargin(0);
	hlay->addWidget(m_product);
	QWidget *statusWidget = new QWidget();
	QVBoxLayout *vlay = new QVBoxLayout();
	vlay->addWidget(new QLabel("this is status widget"));
	statusWidget->setLayout(vlay);
	hlay->addWidget(statusWidget);
	ui.ProductWidget->setLayout(hlay);
}

void MainWindows::makeConfigWidget()
{
	QLabel *config = new QLabel("this is config widget");

	QHBoxLayout *hlay = new QHBoxLayout();
	m_product->setContentsMargins(0, 0, 0, 0);
	hlay->setMargin(0);
	hlay->addWidget(config);
	//ui.ProductWidget->setLayout(hlay);
}

void MainWindows::makeMotionWidget()
{
	QLabel *config = new QLabel("this is Motion widget");

	QHBoxLayout *hlay = new QHBoxLayout();
	m_product->setContentsMargins(0, 0, 0, 0);
	hlay->setMargin(0);
	hlay->addWidget(config);
	ui.MotionWidget->setLayout(hlay);
}

void MainWindows::makeMotorWidget()
{
	QLabel *config = new QLabel("this is Motor widget");

	QHBoxLayout *hlay = new QHBoxLayout();
	m_product->setContentsMargins(0, 0, 0, 0);
	hlay->setMargin(0);
	hlay->addWidget(config);
	ui.MotionWidget->setLayout(hlay);
}

void MainWindows::makeDebugWidget()
{
	QLabel *config = new QLabel("this is debug widget");

	QHBoxLayout *hlay = new QHBoxLayout();
	m_product->setContentsMargins(0, 0, 0, 0);
	hlay->setMargin(0);
	hlay->addWidget(config);
	ui.DebugWidget->setLayout(hlay);
}


