#include "DragButton.h"
#include <QDrag>
#include <QMimeData>
DragButton::DragButton(QWidget *parent)
	: QToolButton(parent)
{
	

}

DragButton::~DragButton()
{
}

void DragButton::mouseMoveEvent(QMouseEvent * event)
{
	if (event->buttons() & Qt::LeftButton)
	{
		QDrag* drag = new QDrag(this);
		QMimeData* mimeData = new QMimeData();
		mimeData->setText(this->text());
		mimeData->setData(typeid(*this).name(), NULL);
		drag->setMimeData(mimeData);
		//doDraged(indexFromItem(m_selectedItem).row());
		drag->exec(Qt::MoveAction);
	}
	QToolButton::mouseMoveEvent(event);
}

void DragButton::dragMoveEvent(QDragMoveEvent * event)
{
	event->setDropAction(Qt::MoveAction);
	event->accept();
}
