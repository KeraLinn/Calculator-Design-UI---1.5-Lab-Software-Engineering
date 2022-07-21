#pragma once
#include "wx/wx.h"
#include "CalculatorGUI.h"
#include <map>

class ButtonFactory
{
private:
	wxWindowBase* _parentWindow;

public:
	
	//typedef std::pair<int, wxString> myPair;
	//std::map<myPair,wxButton> allButtonsMap;
	std::map<int, wxString> allButtonsMap;
	wxButton* CreateButtonNeg(CalculatorGUI* parentWindow);
	wxButton* CreateButton0(CalculatorGUI* parentWindow);
	wxButton* CreateButtonDot(CalculatorGUI* parentWindow);
	wxButton* CreateButtonEquals(CalculatorGUI* parentWindow);
	wxButton* CreateButton1(CalculatorGUI* parentWindow);
	wxButton* CreateButton2(CalculatorGUI* parentWindow);
	wxButton* CreateButton3(CalculatorGUI* parentWindow);
	wxButton* CreateButtonPlus(CalculatorGUI* parentWindow);
	wxButton* CreateButton4(CalculatorGUI* parentWindow);
	wxButton* CreateButton5(CalculatorGUI* parentWindow);
	wxButton* CreateButton6(CalculatorGUI* parentWindow);
	wxButton* CreateButtonMinus(CalculatorGUI* parentWindow);
	wxButton* CreateButton7(CalculatorGUI* parentWindow);
	wxButton* CreateButton8(CalculatorGUI* parentWindow);
	wxButton* CreateButton9(CalculatorGUI* parentWindow);
	wxButton* CreateButtonMult(CalculatorGUI* parentWindow);
	wxButton* CreateButtonSquared(CalculatorGUI* parentWindow);
	wxButton* CreateButtonAbsVal(CalculatorGUI* parentWindow);
	wxButton* CreateButtonMod(CalculatorGUI* parentWindow);
	wxButton* CreateButtonDiv(CalculatorGUI* parentWindow);
	wxButton* CreateButtonHex(CalculatorGUI* parentWindow);
	wxButton* CreateButtonDec(CalculatorGUI* parentWindow);
	wxButton* CreateButtonBin(CalculatorGUI* parentWindow);
	wxButton* CreateButtonClear(CalculatorGUI* parentWindow);

};

