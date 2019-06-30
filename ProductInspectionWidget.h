#pragma once

#include <QWidget>
#include <QTreeWidget>
#include <QTreeWidgetItem>
#include <QDragEnterEvent>
#include <QEvent>
#include <QDrag>
#include <QMimeData>
#include <QEvent>
#include <QMouseEvent>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
class ProductInspectionWidget : public QTreeWidget
{
	Q_OBJECT

public:
	ProductInspectionWidget(QWidget *parent = Q_NULLPTR);
	~ProductInspectionWidget();
protected:
	void mouseMoveEvent(QMouseEvent* event);
	void mousePressEvent(QMouseEvent* event);
	void dragEnterEvent(QDragEnterEvent* event);
	void dropEvent(QDropEvent* event);
	void dragMoveEvent(QDragMoveEvent* event);

private:
};
