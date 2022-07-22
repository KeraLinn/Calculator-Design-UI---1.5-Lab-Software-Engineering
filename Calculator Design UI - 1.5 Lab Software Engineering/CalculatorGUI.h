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
	//displayTextControls
	wxTextCtrl* displayTextbox = nullptr;
	wxTextCtrl* displayOperand = nullptr;
	wxTextCtrl* displayPrevInput = nullptr;
	
	//displayLabels
	wxStaticText* operandTxtCtrlLabel = nullptr;
	wxStaticText* prevInputTxtCtrlLabel = nullptr;
	
	int firstInput = 0;
	int secondInput = 0;
	int theResults;
	OperandAdd addOps;

	int ValueFromTxtCtrlToInt(wxTextCtrl* display);
	wxString IntToWXString(int x);

	
	void onButtonClick(wxCommandEvent& evt);


	wxDECLARE_EVENT_TABLE();
};

