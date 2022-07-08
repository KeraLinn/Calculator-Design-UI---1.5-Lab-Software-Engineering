#pragma once
#include "wx/wx.h"
#include "CalculatorGUI.h"



class CalculatorAppLaunch : public wxApp
{
public:
	CalculatorAppLaunch();
	~CalculatorAppLaunch();
public:
	virtual bool OnInit();

private:
	CalculatorGUI* displayWindow = nullptr;
};

