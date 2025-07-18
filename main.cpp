#include "Planet.h"

Planet::Planet()
{
	CtrlLayout(*this, "Planet");
	Sizeable().MinimizeBox().MaximizeBox();
}

GUI_APP_MAIN
{
	Planet().Run();
}
