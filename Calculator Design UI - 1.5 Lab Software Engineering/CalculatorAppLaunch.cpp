#include "CalculatorAppLaunch.h"

CalculatorAppLaunch::CalculatorAppLaunch()
{
}

CalculatorAppLaunch::~CalculatorAppLaunch()
{
}

bool CalculatorAppLaunch::OnInit()
{
	displayWindow = new CalculatorGUI;
	displayWindow->Show();
	return true;
}
