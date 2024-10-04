#include "mainwindow.h"
#include "secondWindow.h"
#include "Deck.h"
#include "Card.h"

#include <QApplication>

int main(int argc, char *argv[])
{
   QApplication a(argc, argv);
   MainWindow w;
   w.show();
   return a.exec();

   // 카드 랜덤으로 나오게 하는 거,
   // 맨 위 카드 말고 다 뒤집어진 형태로 나타나도록 함.
   // 최대 스코어 520? 52? ==> 카드 52장 사용해서 진행함.
   //

}
