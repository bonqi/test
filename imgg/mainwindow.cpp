#include <QtGui>
#include "mainwindow.h"

MainWindow::MainWindow()
{
filePath="D:\\3kurs\\img\\ky-01.png";
setWindowTitle(tr("Clip gallery"));
setFixedSize(900,500);
fileLabel=new QLabel(this);
fileLabel->setGeometry(10,50,850,120);
fileLabel->setText('open: "+filePath);
}
void MainWindow::PaintEvent(QPaintEvent*)
{
QPainter myPainter(this);
newImage.Load(filePath);
myPainter.drawPixmap(0,0,newImage);
myPainter.restore();
}