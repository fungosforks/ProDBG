#pragma once

#include <QTreeWidget>
#include <ProDBGAPI.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

namespace prodbg
{

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Qt5CallStack : public QTreeWidget
{
    Q_OBJECT
public:
    Qt5CallStack(QWidget* parent);
    virtual ~Qt5CallStack();

    void update(PDReader* reader);
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

}

