#pragma once

class QApplication;

namespace prodbg
{

extern QApplication* g_application;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Application_init(int argc, const char** argv);

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

}
