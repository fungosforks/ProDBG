#include "Qt5ContextMenu.h"
#include "Qt5MainWindow.h"
#include "Qt5BaseView.h"

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

namespace prodbg
{

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

Qt5ContextMenu::Qt5ContextMenu(Qt5MainWindow* mainWindow, Qt5BaseView* parent)
    : QMenu(parent)
    , m_mainWindow(mainWindow)
    , m_parent(parent)
{
    setObjectName(QString::fromUtf8("Qt5ContextMenu"));
    setTitle(tr("&Window"));

    // https://bugreports.qt-project.org/browse/QTBUG-30767
    addAction(m_mainWindow->m_newWindowMenu->menuAction());

    addAction(m_mainWindow->m_windowCloseViewAction);
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

Qt5ContextMenu::~Qt5ContextMenu()
{
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Qt5ContextMenu::display(QPoint position)
{
    this->exec(position);
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

}
