#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
QT_BEGIN_NAMESPACE
class QLabel;
class QPainter;
QT_END_NAMESPACE
class MainWindow: public QMainWindow
{
public:
MainWindow();
protected:
void openImage(const QString& path=QString());
private:
QLabel *fileLabel;
QPainter *myPainter;
QPixmap newImage;
};
#endif
QString filePath;