#include "ButtonFactory.h"

wxFont calculatorButtonFont(45, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_MEDIUM, false);


///////numeric buttons wxIDs 100-109
wxButton* ButtonFactory::CreateButton0(CalculatorGUI* parentWindow) {
	wxButton* Button0 = new wxButton(parentWindow, 100, "0", wxPoint(125, 700), wxSize(125, 100));
	Button0->SetFont(calculatorButtonFont);
	return Button0;
}

wxButton* ButtonFactory::CreateButton1(CalculatorGUI* parentWindow)
{
	wxButton* Button1 = new wxButton(parentWindow, 101, "1", wxPoint(0, 600), wxSize(125, 100));
	Button1->SetFont(calculatorButtonFont);
	return Button1;
}

wxButton* ButtonFactory::CreateButton2(CalculatorGUI* parentWindow)
{
	wxButton* Button2 = new wxButton(parentWindow, 102, "2", wxPoint(125, 600), wxSize(125, 100));
	Button2->SetFont(calculatorButtonFont);
	return Button2;
}

wxButton* ButtonFactory::CreateButton3(CalculatorGUI* parentWindow)
{
	wxButton* Button3 = new wxButton(parentWindow, 103, "3", wxPoint(250, 600), wxSize(125, 100));
	Button3->SetFont(calculatorButtonFont);
	return Button3;
}

wxButton* ButtonFactory::CreateButton4(CalculatorGUI* parentWindow)
{
	wxButton* Button4 = new wxButton(parentWindow, 104, "4", wxPoint(0, 500), wxSize(125, 100));
	Button4->SetFont(calculatorButtonFont);
	return Button4;
}

wxButton* ButtonFactory::CreateButton5(CalculatorGUI* parentWindow)
{
	wxButton* Button5 = new wxButton(parentWindow, 105, "5", wxPoint(125, 500), wxSize(125, 100));
	Button5->SetFont(calculatorButtonFont);
	return Button5;
}

wxButton* ButtonFactory::CreateButton6(CalculatorGUI* parentWindow)
{
	wxButton* Button6 = new wxButton(parentWindow, 106, "6", wxPoint(250, 500), wxSize(125, 100));
	Button6->SetFont(calculatorButtonFont);
	return Button6;
}

wxButton* ButtonFactory::CreateButton7(CalculatorGUI* parentWindow)
{
	wxButton* Button7 = new wxButton(parentWindow, 107, "7", wxPoint(0, 400), wxSize(125, 100));
	Button7->SetFont(calculatorButtonFont);
	return Button7;
}

wxButton* ButtonFactory::CreateButton8(CalculatorGUI* parentWindow)
{
	wxButton* Button8 = new wxButton(parentWindow, 108, "8", wxPoint(125, 400), wxSize(125, 100));
	Button8->SetFont(calculatorButtonFont);
	return Button8;
}

wxButton* ButtonFactory::CreateButton9(CalculatorGUI* parentWindow)
{
	wxButton* Button9 = new wxButton(parentWindow, 109, "9", wxPoint(250, 400), wxSize(125, 100));
	Button9->SetFont(calculatorButtonFont);
	return Button9;
}

/////////non-numeric & operand buttons wxIDs 110-119
/////////Negative,Dot,Equals,plus,minus,mult,squared,AbsVal,mod,divide
wxButton* ButtonFactory::CreateButtonNeg(CalculatorGUI* parentWindow)
{
	wxButton* ButtonNeg = new wxButton(parentWindow, 110, "+/-", wxPoint(0, 700), wxSize(125, 100));
	ButtonNeg->SetFont(calculatorButtonFont);
	return ButtonNeg;
}

wxButton* ButtonFactory::CreateButtonDot(CalculatorGUI* parentWindow)
{
	wxButton* ButtonDot = new wxButton(parentWindow, 111, ".", wxPoint(250, 700), wxSize(125, 100));
	ButtonDot->SetFont(calculatorButtonFont);
	return ButtonDot;
}

wxButton* ButtonFactory::CreateButtonEquals(CalculatorGUI* parentWindow)
{
	wxButton* ButtonEquals = new wxButton(parentWindow, 112, "=", wxPoint(375, 700), wxSize(125, 100));
	ButtonEquals->SetFont(calculatorButtonFont);
	return ButtonEquals;
}


wxButton* ButtonFactory::CreateButtonPlus(CalculatorGUI* parentWindow)
{
	wxButton* ButtonPlus = new wxButton(parentWindow, 113, "+", wxPoint(375, 600), wxSize(125, 100));
	ButtonPlus->SetFont(calculatorButtonFont);
	return ButtonPlus;
}

wxButton* ButtonFactory::CreateButtonMinus(CalculatorGUI* parentWindow)
{
	wxButton* ButtonMinus = new wxButton(parentWindow, 114, "-", wxPoint(375, 500), wxSize(125, 100));
	ButtonMinus->SetFont(calculatorButtonFont);
	return ButtonMinus;
}


wxButton* ButtonFactory::CreateButtonMult(CalculatorGUI* parentWindow)
{
	wxButton* ButtonMult = new wxButton(parentWindow, 115, "*", wxPoint(375, 400), wxSize(125, 100));
	ButtonMult->SetFont(calculatorButtonFont);
	return ButtonMult;
}

wxButton* ButtonFactory::CreateButtonSquared(CalculatorGUI* parentWindow)
{
	wxButton* ButtonSquared = new wxButton(parentWindow, 116, "x^2", wxPoint(0, 300), wxSize(125, 100));
	ButtonSquared->SetFont(calculatorButtonFont);
	return ButtonSquared;
}

wxButton* ButtonFactory::CreateButtonAbsVal(CalculatorGUI* parentWindow)
{
	wxButton* ButtonAbsVal = new wxButton(parentWindow, 117, "|x|", wxPoint(125, 300), wxSize(125, 100));
	ButtonAbsVal->SetFont(calculatorButtonFont);
	return ButtonAbsVal;
}

wxButton* ButtonFactory::CreateButtonMod(CalculatorGUI* parentWindow)
{
	wxButton* ButtonMod = new wxButton(parentWindow, 118, "Mod", wxPoint(250, 300), wxSize(125, 100));
	ButtonMod->SetFont(calculatorButtonFont);
	return ButtonMod;
}

wxButton* ButtonFactory::CreateButtonDiv(CalculatorGUI* parentWindow)
{
	wxButton* ButtonDiv = new wxButton(parentWindow, 119, "/", wxPoint(375, 300), wxSize(125, 100));
	ButtonDiv->SetFont(calculatorButtonFont);
	return ButtonDiv;
}

/////////Hex,Dec,Bin,Clear function buttons -- wxIDs 120-123
wxButton* ButtonFactory::CreateButtonHex(CalculatorGUI* parentWindow)
{
	wxButton* ButtonHex = new wxButton(parentWindow, 120, "Hex", wxPoint(0, 200), wxSize(125, 100));
	ButtonHex->SetFont(calculatorButtonFont);
	return ButtonHex;
}

wxButton* ButtonFactory::CreateButtonDec(CalculatorGUI* parentWindow)
{
	wxButton* ButtonDec = new wxButton(parentWindow, 121, "Dec", wxPoint(125, 200), wxSize(125, 100));
	ButtonDec->SetFont(calculatorButtonFont);
	return ButtonDec;
}

wxButton* ButtonFactory::CreateButtonBin(CalculatorGUI* parentWindow)
{
	wxButton* ButtonBin = new wxButton(parentWindow, 122, "Bin", wxPoint(250, 200), wxSize(125, 100));
	ButtonBin->SetFont(calculatorButtonFont);
	return ButtonBin;
}

wxButton* ButtonFactory::CreateButtonClear(CalculatorGUI* parentWindow)
{
	wxButton* ButtonClear = new wxButton(parentWindow, 123, "C", wxPoint(375, 200), wxSize(125, 100));
	ButtonClear->SetFont(calculatorButtonFont);
	return ButtonClear;
}
