
#include "Rull.h"
#include "ui_Rull.h"

Rull::Rull(QWidget *parent) :
   QDialog(parent),
   ui(new Ui::Rull)
{
   ui->setupUi(this);
}

Rull::~Rull()
{
   delete ui;
}
