#include "MainWindows.h"
#include <QtWidgets/QApplication>
#include "AppInit.h"
int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QFile file(":/StyleSheet/flatwhite.css");
	if (file.open(QFile::ReadOnly)) {
		QString qss = QLatin1String(file.readAll());
		QString paletteColor = qss.mid(20, 7);
		qApp->setPalette(QPalette(QColor(paletteColor)));
		qApp->setStyleSheet(qss);
		file.close();
	}
	a.setFont(QFont("Microsoft Yahei", 9));
	AppInit::Instance()->start();
	MainWindows w;
	w.show();
	
	return a.exec();
}
