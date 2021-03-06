#pragma once

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <QDockWidget>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

namespace prodbg
{

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Qt5MainWindow;
class Qt5BaseView;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Qt5DockWidget : public QDockWidget
{
    Q_OBJECT

public:
    Qt5DockWidget(const QString&  title,
                  Qt5MainWindow*  mainWindow,
                  Qt5BaseView*    parent = nullptr,
                  int             childId = 0,
                  Qt::WindowFlags flags = 0);

    virtual ~Qt5DockWidget();

protected:
    void closeEvent(QCloseEvent* event);

private:
    Qt5MainWindow* m_mainWindow;
    Qt5BaseView* m_parent;
    int m_width;
    int m_height;
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

}
