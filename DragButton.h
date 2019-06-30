#pragma once
#include <QToolButton>
#include <QDragMoveEvent>

class DragButton : public QToolButton
{
	Q_OBJECT

public:
	DragButton(QWidget *parent = Q_NULLPTR);
	~DragButton();
protected:
	virtual void mouseMoveEvent(QMouseEvent* event);
	virtual void dragMoveEvent(QDragMoveEvent *event);

private:

};
