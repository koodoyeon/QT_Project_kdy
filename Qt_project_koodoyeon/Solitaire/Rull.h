#ifndef RULL_H
#define RULL_H

#include <QDialog>

namespace Ui {
class Rull;
}

class Rull : public QDialog
{
   Q_OBJECT

public:
   explicit Rull(QWidget *parent = nullptr);
   ~Rull();

private:
   Ui::Rull *ui;
};

#endif // RULL_H
