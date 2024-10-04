#ifndef DRAGGABLELABEL_H
#define DRAGGABLELABEL_H

#include <QLabel>
#include <QMouseEvent>

class DraggableLabel : public QLabel {
    Q_OBJECT

public:
    explicit DraggableLabel(QWidget *parent = nullptr) : QLabel(parent) {
        setAttribute(Qt::WA_MouseTracking);
    }

protected:
    void mousePressEvent(QMouseEvent *event) override {
        if (event->button() == Qt::LeftButton) {
            dragStartPosition = event->pos();
            mousePressed = true;
        }
    }

    void mouseMoveEvent(QMouseEvent *event) override {
        if (mousePressed && (event->buttons() & Qt::LeftButton)) {
            move(event->globalPos() - dragStartPosition);
        }
    }

    void mouseReleaseEvent(QMouseEvent *event) override {
        if (event->button() == Qt::LeftButton) {
            mousePressed = false;
        }
    }

private:
    QPoint dragStartPosition;
    bool mousePressed = false;
};

#endif // DRAGGABLELABEL_H
