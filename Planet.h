#ifndef _Planet_Planet_h
#define _Planet_Planet_h

#include <CtrlLib/CtrlLib.h>

using namespace Upp;

#define LAYOUTFILE <Planet/Planet.lay>
#include <CtrlCore/lay.h>

class Planet : public WithPlanetLayout<TopWindow> {
public:
	Planet();
};

#endif
