#pragma once

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Qt5Registers.h"
#include "Qt5BaseView.h"
#include "Qt5DynamicView.h"

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

namespace prodbg
{

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Qt5RegistersViewContextMenu : public Qt5DynamicViewContextMenu
{
    Q_OBJECT

public:
    Qt5RegistersViewContextMenu(Qt5MainWindow* mainWindow, Qt5BaseView* parent = nullptr);
    virtual ~Qt5RegistersViewContextMenu();
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Qt5RegistersView : public Qt5BaseView
{
    Q_OBJECT

public:
    Qt5RegistersView(Qt5MainWindow* mainWindow, Qt5DockWidget* dock, Qt5DynamicView* parent = nullptr);
    virtual ~Qt5RegistersView();

    virtual Qt5ViewType getViewType() const
    {
        return Qt5ViewType_Registers;
    }

    virtual QString getViewTypeName() const
    {
        return "Registers";
    }

protected:
    virtual Qt5ContextMenu* createContextMenu()
    {
        return new Qt5RegistersViewContextMenu(m_mainWindow, this);
    }

private:
    Qt5Registers* m_locals;
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

}
