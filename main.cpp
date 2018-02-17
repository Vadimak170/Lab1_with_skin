#include "mainwindow.h"
#include <QApplication>
#include "DarkStyle.h"
#include "framelesswindow.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //MainWindow w;
   // w.show();
    // style our application with custom dark style
      a.setStyle(new DarkStyle);

      // create frameless window (and set windowState or title)
      FramelessWindow framelessWindow;
      //framelessWindow.setWindowState(Qt::WindowMaximized);
      //framelessWindow.setWindowTitle("test title");

      // create our mainwindow instance
      MainWindow *mainWindow = new MainWindow;

      // add the mainwindow to our custom frameless window
      framelessWindow.setContent(mainWindow);
      framelessWindow.show();
    return a.exec();
}
