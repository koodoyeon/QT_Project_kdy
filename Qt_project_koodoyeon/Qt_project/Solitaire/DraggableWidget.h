#ifndef DRAGGABLEWIDGET_H
#define DRAGGABLEWIDGET_H

#include <QLabel>

class DraggableWidget : public QLabel {
    Q_OBJECT

public:
    explicit DraggableWidget(QWidget *parent = nullptr);

protected:
    void mousePressEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;

private:
    QPoint offset;
};

#endif // DRAGGABLEWIDGET_H
