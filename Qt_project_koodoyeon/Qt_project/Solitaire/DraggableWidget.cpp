#include "DraggableWidget.h"
#include <QMouseEvent>

DraggableWidget::DraggableWidget(QWidget *parent) : QLabel(parent) {}

void DraggableWidget::mousePressEvent(QMouseEvent *event) {
    if (event->button() == Qt::LeftButton) {
        offset = event->pos();
        setCursor(Qt::ClosedHandCursor);
    }
}

void DraggableWidget::mouseMoveEvent(QMouseEvent *event) {
    if (event->buttons() & Qt::LeftButton) {
        move(mapToParent(event->pos() - offset));
    }
}
