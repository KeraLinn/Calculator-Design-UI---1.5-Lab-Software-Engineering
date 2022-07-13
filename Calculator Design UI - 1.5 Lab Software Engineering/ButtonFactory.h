#pragma once
#include "wx/wx.h"
#include "CalculatorGUI.h"

class ButtonFactory
{
private:
	wxWindowBase* _parentWindow;

public:
	wxButton* CreateButton0(CalculatorGUI* parentWindow);


};

