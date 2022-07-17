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
	//displayWindow->Bind(CalculatorGUI::OnInitDialog, wxButton::, 100, 122, displayWindow);
	return true;
}
