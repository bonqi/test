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
void MainWindow::openImage(const QString&path)
{
filePath=path;
if(filePath.is Null)
filePath=QFileDialog::get OpenFileName(this, tr("Open Image"),"ImageFiles (*png *jpg *bmp)")
if(filePath.isEmpty()){
	MessageBox::warning(this,tr("OpenImage");
}