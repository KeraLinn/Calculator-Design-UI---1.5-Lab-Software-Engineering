#include "CalculatorAppLaunch.h"
wxIMPLEMENT_APP(CalculatorAppLaunch);

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
