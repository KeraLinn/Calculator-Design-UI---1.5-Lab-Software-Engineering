#pragma once
#include "wx/wx.h"
#include "OperandAdd.h"

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
	wxTextCtrl* displayTextbox2 = nullptr;
	wxTextCtrl* displayOperand = nullptr;
	wxTextCtrl* displayPrevInput = nullptr;
	int firstInput = 0;
	int secondInput = 0;
	int theResults;
	OperandAdd addOps;

	int ValueFromTxtCtrlToInt(wxTextCtrl* display);
	wxString IntToWXString(int x);

	
	void onButtonClick(wxCommandEvent& evt);
	wxString ClickEqualsDone(int firstInput, int secondInput);

	wxDECLARE_EVENT_TABLE();
};

