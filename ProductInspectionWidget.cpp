#include "ProductInspectionWidget.h"
#include <QStringList>
#include <QHeaderView>
ProductInspectionWidget::ProductInspectionWidget(QWidget *parent)
	: QTreeWidget(parent)
{
	QHeaderView *view=this->header();
	view->setMinimumHeight(50);
	//view->setLayout();
	this->setAcceptDrops(true);
	QTreeWidgetItem *headerItem=this->headerItem();
	headerItem->setText(0,"this is producttion");
	this->setStyleSheet(
		"QTreeWidget::item{ height:40px;}"
		"QTreeWidget::item:hover{ background-color:rgb(119,136,153,50) }"
		"QTreeWidget::item:selected{ background-color:rgb(119,136,153,100) }"
		);
}

ProductInspectionWidget::~ProductInspectionWidget()
{
}

void ProductInspectionWidget::mouseMoveEvent(QMouseEvent * event)
{
	if (event->buttons() & Qt::LeftButton)
	{

	}
	QTreeWidget::mouseMoveEvent(event);
}

void ProductInspectionWidget::mousePressEvent(QMouseEvent * event)
{
}

void ProductInspectionWidget::dragEnterEvent(QDragEnterEvent * event)
{
	event->setDropAction(Qt::MoveAction);
	event->accept();
}

void ProductInspectionWidget::dropEvent(QDropEvent * event)
{	
	QTreeWidgetItem* item = new QTreeWidgetItem(QStringList() << QString(event->mimeData()->text()));
	this->addTopLevelItem(item);
}

void ProductInspectionWidget::dragMoveEvent(QDragMoveEvent * event)
{
	event->setDropAction(Qt::MoveAction);
	event->accept();
}
