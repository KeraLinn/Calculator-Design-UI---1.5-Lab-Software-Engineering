#pragma once
#include "wx/wx.h"

class CalculatorGUI : public wxFrame
{
public:
	CalculatorGUI();

	~CalculatorGUI();

private:
	wxButton* Button0, *Button1, *Button2, * Button3, * Button4, * Button5, * Button6, * Button7, * Button8, * Button9, * ButtonDot, * ButtonEquals, * ButtonPlus, * ButtonMinus, * ButtonDiv, * ButtonMult, * ButtonMod, * ButtonNeg, * ButtonHex, * ButtonDec, * ButtonBin, * ButtonClear, *ButtonSquared,*ButtonAbsVal;

public:
	int xWidth = 4;
	int yHeight = 6;
	wxTextCtrl* displayTextbox = nullptr;

	int ValueFromTxtCtrlToInt();
	wxString IntToWXString(int x);
	void ClickEquals(int a, int b);
	static int firstInput;
	static int secondInput;
	
	void onButtonClick(wxCommandEvent& evt);
	

	wxDECLARE_EVENT_TABLE();
};

