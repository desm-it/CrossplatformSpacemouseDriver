#include "gui/MainWidget.h"
#include "gui/VisibleSpaceMouseListener.h"
#include "driver/SpaceMouseController.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWidget w;

    QSurfaceFormat format;
    format.setDepthBufferSize(24);
    QSurfaceFormat::setDefaultFormat(format);
    SpaceMouseController * current_controller = new SpaceMouseController(&w);

    w.show();
    return  a.exec();
}
