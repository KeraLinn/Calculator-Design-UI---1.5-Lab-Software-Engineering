#include "ButtonFactory.h"

wxFont calculatorButtonFont(45, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_MEDIUM, false);





wxButton* ButtonFactory::CreateButtonNeg(CalculatorGUI* parentWindow)
{
	wxButton* ButtonNeg = new wxButton(parentWindow, 100, "+/-", wxPoint(0, 700), wxSize(125, 100));
	ButtonNeg->SetFont(calculatorButtonFont);
	//allButtonsMap.insert(std::pair<int,std::string>(ButtonNeg->GetId(),ButtonNeg->GetLabel()));
	return ButtonNeg;
}

wxButton* ButtonFactory::CreateButton0(CalculatorGUI* parentWindow) {
	wxButton* Button0 = new wxButton(parentWindow,101,"0", wxPoint(125,700),wxSize(125,100));
	Button0->SetFont(calculatorButtonFont);
	Button0->SetLabel("0");
	return Button0;
}

wxButton* ButtonFactory::CreateButtonDot(CalculatorGUI* parentWindow)
{
	wxButton* ButtonDot = new wxButton(parentWindow, 102, ".", wxPoint(250, 700), wxSize(125, 100));
	ButtonDot->SetFont(calculatorButtonFont);
	return nullptr;
}

wxButton* ButtonFactory::CreateButtonEquals(CalculatorGUI* parentWindow)
{
	wxButton* ButtonEquals = new wxButton(parentWindow, 103, "=", wxPoint(375, 700), wxSize(125, 100));
	ButtonEquals->SetFont(calculatorButtonFont);
	return nullptr;
}

wxButton* ButtonFactory::CreateButton1(CalculatorGUI* parentWindow)
{
	wxButton* Button1 = new wxButton(parentWindow, 104, "1", wxPoint(0, 600), wxSize(125, 100));
	Button1->SetFont(calculatorButtonFont);
	return nullptr;
}

wxButton* ButtonFactory::CreateButton2(CalculatorGUI* parentWindow)
{
	wxButton* Button2 = new wxButton(parentWindow, 105, "2", wxPoint(125, 600), wxSize(125, 100));
	Button2->SetFont(calculatorButtonFont);
	return nullptr;
}

wxButton* ButtonFactory::CreateButton3(CalculatorGUI* parentWindow)
{
	wxButton* Button3 = new wxButton(parentWindow, 106, "3", wxPoint(250, 600), wxSize(125, 100));
	Button3->SetFont(calculatorButtonFont);
	return nullptr;
}

wxButton* ButtonFactory::CreateButtonPlus(CalculatorGUI* parentWindow)
{
	wxButton* ButtonPlus = new wxButton(parentWindow, 107, "+", wxPoint(375, 600), wxSize(125, 100));
	ButtonPlus->SetFont(calculatorButtonFont);
	return nullptr;
}

wxButton* ButtonFactory::CreateButton4(CalculatorGUI* parentWindow)
{
	wxButton* Button4 = new wxButton(parentWindow, 108, "4", wxPoint(0, 500), wxSize(125, 100));
	Button4->SetFont(calculatorButtonFont);
	return nullptr;
}

wxButton* ButtonFactory::CreateButton5(CalculatorGUI* parentWindow)
{
	wxButton* Button5 = new wxButton(parentWindow, 109, "5", wxPoint(125, 500), wxSize(125, 100));
	Button5->SetFont(calculatorButtonFont);
	return nullptr;
}

wxButton* ButtonFactory::CreateButton6(CalculatorGUI* parentWindow)
{
	wxButton* Button6 = new wxButton(parentWindow, 110, "6", wxPoint(250, 500), wxSize(125, 100));
	Button6->SetFont(calculatorButtonFont);
	return nullptr;
}

wxButton* ButtonFactory::CreateButtonMinus(CalculatorGUI* parentWindow)
{
	wxButton* ButtonMinus = new wxButton(parentWindow, 111, "-", wxPoint(375, 500), wxSize(125, 100));
	ButtonMinus->SetFont(calculatorButtonFont);
	return nullptr;
}

wxButton* ButtonFactory::CreateButton7(CalculatorGUI* parentWindow)
{
	wxButton* Button7 = new wxButton(parentWindow, 112, "7", wxPoint(0, 400), wxSize(125, 100));
	Button7->SetFont(calculatorButtonFont);
	return nullptr;
}

wxButton* ButtonFactory::CreateButton8(CalculatorGUI* parentWindow)
{
	wxButton* Button8 = new wxButton(parentWindow, 113, "8", wxPoint(125, 400), wxSize(125, 100));
	Button8->SetFont(calculatorButtonFont);
	return nullptr;
}

wxButton* ButtonFactory::CreateButton9(CalculatorGUI* parentWindow)
{
	wxButton* Button9 = new wxButton(parentWindow, 114, "9", wxPoint(250, 400), wxSize(125, 100));
	Button9->SetFont(calculatorButtonFont);
	return nullptr;
}

wxButton* ButtonFactory::CreateButtonMult(CalculatorGUI* parentWindow)
{
	wxButton* ButtonMult = new wxButton(parentWindow, 115, "*", wxPoint(375, 400), wxSize(125, 100));
	ButtonMult->SetFont(calculatorButtonFont);
	return nullptr;
}

wxButton* ButtonFactory::CreateButtonSquared(CalculatorGUI* parentWindow)
{
	wxButton* ButtonSquared = new wxButton(parentWindow, 116, "x^2", wxPoint(0, 300), wxSize(125, 100));
	ButtonSquared->SetFont(calculatorButtonFont);
	return nullptr;
}

wxButton* ButtonFactory::CreateButtonAbsVal(CalculatorGUI* parentWindow)
{
	wxButton* ButtonAbsVal = new wxButton(parentWindow, 117, "|x|", wxPoint(125, 300), wxSize(125, 100));
	ButtonAbsVal->SetFont(calculatorButtonFont);
	return nullptr;
}

wxButton* ButtonFactory::CreateButtonMod(CalculatorGUI* parentWindow)
{
	wxButton* ButtonMod = new wxButton(parentWindow, 118, "Mod", wxPoint(250, 300), wxSize(125, 100));
	ButtonMod->SetFont(calculatorButtonFont);
	return nullptr;
}

wxButton* ButtonFactory::CreateButtonDiv(CalculatorGUI* parentWindow)
{
	wxButton* ButtonDiv = new wxButton(parentWindow, 119, "/", wxPoint(375, 300), wxSize(125, 100));
	ButtonDiv->SetFont(calculatorButtonFont);
	return nullptr;
}

wxButton* ButtonFactory::CreateButtonHex(CalculatorGUI* parentWindow)
{
	wxButton* ButtonHex = new wxButton(parentWindow, 120, "Hex", wxPoint(0, 200), wxSize(125, 100));
	ButtonHex->SetFont(calculatorButtonFont);
	return nullptr;
}

wxButton* ButtonFactory::CreateButtonDec(CalculatorGUI* parentWindow)
{
	wxButton* ButtonDec = new wxButton(parentWindow, 121, "Dec", wxPoint(125, 200), wxSize(125, 100));
	ButtonDec->SetFont(calculatorButtonFont);
	return nullptr;
}

wxButton* ButtonFactory::CreateButtonBin(CalculatorGUI* parentWindow)
{
	wxButton* ButtonBin = new wxButton(parentWindow, 122, "Bin", wxPoint(250, 200), wxSize(125, 100));
	ButtonBin->SetFont(calculatorButtonFont);
	allButtons.push_back(ButtonBin);
	return nullptr;
}

wxButton* ButtonFactory::CreateButtonClear(CalculatorGUI* parentWindow)
{
	wxButton* ButtonClear = new wxButton(parentWindow, 123, "C", wxPoint(375, 200), wxSize(125, 100));
	ButtonClear->SetFont(calculatorButtonFont);
	return nullptr;
}
