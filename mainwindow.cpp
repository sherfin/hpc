#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <stdio.h>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsPixmapItem>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QObject::connect(this,SIGNAL(playClicked()),this,SLOT(Play()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{

    emit playClicked();


}

void MainWindow::Play()
{

  //char address[20];

  //strcpy(address,"/home/sherfin/srcpic/input.png");

  QGraphicsScene scene;
  scene.setSceneRect( -100.0, -100.0, 200.0, 200.0 );

  QGraphicsPixmapItem *source = scene.addPixmap(QPixmap("/home/sherfin/picsrc/input.png"));

   source->setPixmap(QPixmap("/home/sherfin/picsrc/inputdsf.png"));
  ui->gview->setScene(&scene);

  //for(int i=0;i<10;i++)



      //address[32] = '0';

      //printf("%s",address);


      //source = source.scaledToHeight(341);
      //source = source.scaledToWidth(800);


      //source = QPixmap("frame_000000.png");
  //ui->gview->setRenderHints( QPainter::Antialiasing );
      ui->gview->show();
            //printf("%s",address);
}
