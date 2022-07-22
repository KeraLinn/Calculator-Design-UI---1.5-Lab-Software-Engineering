#include "CalculatorGUI.h"
#include "ButtonFactory.h"
#include "CalculatorProcessor.h"
#include "IBaseCommand.h"


wxBEGIN_EVENT_TABLE(CalculatorGUI, wxFrame)
EVT_COMMAND_RANGE(100, 123, wxEVT_COMMAND_BUTTON_CLICKED, CalculatorGUI::onButtonClick)


wxEND_EVENT_TABLE()

CalculatorGUI::CalculatorGUI() : wxFrame(nullptr, wxID_ANY, "Lab 1.5 - Calculator", wxPoint(400, 150), wxSize(500, 845)) {


#pragma region ////Code for Cosmetics////
	//Ideally space is for colors/color dialogs, pencolors/fonts etc.
	wxFont calculatorDisplayFont(60, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false);
	wxFont operandDisplayFont(30, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false);
	wxFont prevInputDisplayFont(25, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false);
	wxFont staticTextboxFont(14, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false);
	
#pragma endregion	

#pragma region ////wxTextCtrls & wxStaticText Code////
	displayTextbox = new wxTextCtrl(this, wxID_ANY, " ", wxPoint(100, 0), wxSize(400, 200), wxTE_RIGHT);
	displayTextbox->SetFont(calculatorDisplayFont);

	operandTxtCtrlLabel = new wxStaticText(this, wxID_ANY, "Operand", wxPoint(0, 0), wxSize(100, 25), wxTE_CENTER);
	operandTxtCtrlLabel->SetFont(staticTextboxFont);
	operandTxtCtrlLabel->SetBackgroundColour(*wxLIGHT_GREY);

	displayOperand = new wxTextCtrl(this, wxID_ANY, " ", wxPoint(0, 25), wxSize(100, 75), wxTE_CENTER);
	displayOperand->SetFont(operandDisplayFont);

	prevInputTxtCtrlLabel = new wxStaticText(this, wxID_ANY, "Last Input", wxPoint(0, 100), wxSize(100, 25), wxTE_CENTER);
	prevInputTxtCtrlLabel->SetFont(staticTextboxFont);
	prevInputTxtCtrlLabel->SetBackgroundColour(*wxLIGHT_GREY);

	displayPrevInput = new wxTextCtrl(this, wxID_ANY, " ", wxPoint(0, 125), wxSize(100, 75), wxTE_CENTER);
	displayPrevInput->SetFont(prevInputDisplayFont);
#pragma endregion

#pragma region ////Button Factory & Creating Buttons////
	ButtonFactory factory{};
	wxButton* ButtonNeg = factory.CreateButtonNeg(this);
	wxButton* Button0 = factory.CreateButton0(this);
	wxButton* ButtonDot = factory.CreateButtonDot(this);
	wxButton* ButtonEquals = factory.CreateButtonEquals(this);
	wxButton* Button1 = factory.CreateButton1(this);
	wxButton* Button2 = factory.CreateButton2(this);
	wxButton* Button3 = factory.CreateButton3(this);
	wxButton* ButtonPlus = factory.CreateButtonPlus(this);
	wxButton* Button4 = factory.CreateButton4(this);
	wxButton* Button5 = factory.CreateButton5(this);
	wxButton* Button6 = factory.CreateButton6(this);
	wxButton* ButtonMinus = factory.CreateButtonMinus(this);
	wxButton* Button7 = factory.CreateButton7(this);
	wxButton* Button8 = factory.CreateButton8(this);
	wxButton* Button9 = factory.CreateButton9(this);
	wxButton* ButtonMult = factory.CreateButtonMult(this);
	wxButton* ButtonSquared = factory.CreateButtonSquared(this);
	wxButton* ButtonAbsVal = factory.CreateButtonAbsVal(this);
	wxButton* ButtonMod = factory.CreateButtonMod(this);
	wxButton* ButtonDiv = factory.CreateButtonDiv(this);
	wxButton* ButtonHex = factory.CreateButtonHex(this);
	wxButton* ButtonDec = factory.CreateButtonDec(this);
	wxButton* ButtonBin = factory.CreateButtonBin(this);
	wxButton* ButtonClear = factory.CreateButtonClear(this);
#pragma endregion

}

CalculatorGUI::~CalculatorGUI()
{
}

int CalculatorGUI::ValueFromTxtCtrlToInt(wxTextCtrl* display)
{
	wxString str = display->GetValue();
	int theNum = wxAtoi(str);
	if (str.Contains(".")) {
		theNum /= 100;
	}
	return theNum;
}

wxString CalculatorGUI::IntToWXString(int x)
{
	wxString theString; 
	theString << x;
	return theString;
}


void CalculatorGUI::onButtonClick(wxCommandEvent& evt) {
	
	CalculatorProcessor* processor = CalculatorProcessor::GetInstance();
	
	int theID = evt.GetId();
	//100 = neg, 102 = dot, 103 = =,107 = +, 111 = -, 115 = *, 116 = ^2, 117 = |x|, 118 = %, 119 = /, 120 = hex, 121 = dec, 122 = bin, 123 = C
	if (theID <= 111) {
		switch (theID) {
		case 100: {displayTextbox->AppendText(IntToWXString(0)); break; }
		case 101: {displayTextbox->AppendText(IntToWXString(1)); break; }
		case 102: {displayTextbox->AppendText(IntToWXString(2)); break; }
		case 103: {displayTextbox->AppendText(IntToWXString(3)); break; }
		case 104: {displayTextbox->AppendText(IntToWXString(4)); break; }
		case 105: {displayTextbox->AppendText(IntToWXString(5)); break; }
		case 106: {displayTextbox->AppendText(IntToWXString(6)); break; }
		case 107: {displayTextbox->AppendText(IntToWXString(7)); break; }
		case 108: {displayTextbox->AppendText(IntToWXString(8)); break; }
		case 109: {displayTextbox->AppendText(IntToWXString(9)); break; }
		case 110: {
			int theNegative = ValueFromTxtCtrlToInt(displayTextbox);
			displayTextbox->Clear();
			theNegative = theNegative * -1;
			displayTextbox->AppendText(IntToWXString(theNegative)); break; }
		case 111: {displayTextbox->AppendText("."); break; }
		}
	}
	else if (theID > 112) {
		switch (theID) {
		//add
		case 113: {
			int firstInput = ValueFromTxtCtrlToInt(displayTextbox);
			processor->SetFirstInput(firstInput);
			processor->SetTheOperator(theID);
			displayOperand->AppendText("+");
			displayPrevInput->AppendText(IntToWXString(firstInput));
			displayTextbox->Clear(); break; }
		//subtract
		case 114: { //minus
			int firstInput = ValueFromTxtCtrlToInt(displayTextbox);
			processor->SetFirstInput(firstInput);
			processor->SetTheOperator(theID);
			displayOperand->AppendText("-");
			displayPrevInput->AppendText(IntToWXString(firstInput));
			displayTextbox->Clear(); break; }
		//mult
		case 115: {
			int firstInput = ValueFromTxtCtrlToInt(displayTextbox);
			processor->SetFirstInput(firstInput);
			processor->SetTheOperator(theID);
			displayOperand->AppendText("*"); 
			displayPrevInput->AppendText(IntToWXString(firstInput));
			displayTextbox->Clear(); break; }
		//squared
		case 116: { 
			int firstInput = ValueFromTxtCtrlToInt(displayTextbox);
			processor->SetFirstInput(firstInput);
			processor->SetTheOperator(theID);
			displayOperand->AppendText("x^2"); 
			displayPrevInput->AppendText(IntToWXString(firstInput));
			displayTextbox->Clear(); 
			int theAnswer = processor->ClickEquals(processor->GetFirstInput(),NULL);
			wxString finalAnswer = IntToWXString(theAnswer);
			displayTextbox->AppendText(finalAnswer); 
			break; }
		case 117: { //absolute value
			int firstInput = ValueFromTxtCtrlToInt(displayTextbox);
			processor->SetFirstInput(firstInput);
			processor->SetTheOperator(theID);
			displayOperand->AppendText("|x|"); 
			displayPrevInput->AppendText(IntToWXString(firstInput));
			displayTextbox->Clear();
			int theAnswer = processor->ClickEquals(processor->GetFirstInput(), NULL);
			wxString finalAnswer = IntToWXString(theAnswer);
			displayTextbox->AppendText(finalAnswer);
			break; }
		//mod
		case 118: {
			int firstInput = ValueFromTxtCtrlToInt(displayTextbox);
			processor->SetFirstInput(firstInput);
			processor->SetTheOperator(theID);
			displayOperand->AppendText("%"); 
			displayPrevInput->AppendText(IntToWXString(firstInput));
			displayTextbox->Clear(); break; }
		//divide
		case 119: {
			int firstInput = ValueFromTxtCtrlToInt(displayTextbox);
			processor->SetFirstInput(firstInput);
			processor->SetTheOperator(theID);
			displayOperand->AppendText("/"); 
			displayPrevInput->AppendText(IntToWXString(firstInput));
			displayTextbox->Clear(); break; }
		//Hex
		case 120: {
			
			processor->SetFirstInput(firstInput);
			displayOperand->AppendText("Hex"); break; }
		//Dec
		case 121: {
			int firstInput = ValueFromTxtCtrlToInt(displayTextbox);
			displayOperand->AppendText("Dec");
			processor->GetDecimal(firstInput);
			displayTextbox->AppendText(IntToWXString(processor->GetDecimal(firstInput)));
			break; }
		//Bin
		case 122: {
			int firstInput = ValueFromTxtCtrlToInt(displayTextbox);
			processor->SetBaseNumber(firstInput); 
			
			displayOperand->AppendText("Bin"); 
			displayPrevInput->AppendText(IntToWXString(firstInput));
			displayTextbox->Clear();
			
			std::string theAnswer = processor->GetBinary();
			wxString finalAnswer(theAnswer);
			displayTextbox->AppendText(finalAnswer); 
			break; }
		//Clear
		case 123: { 
			displayTextbox->Clear(); 
			displayOperand->Clear();
			displayPrevInput->Clear();
			break; }
		}
	}
	else { ///Equals Case
		int secondInput = ValueFromTxtCtrlToInt(displayTextbox);
		processor->SetSecondInput(secondInput);
		displayTextbox->Clear();
		int theAnswer = processor->ClickEquals(processor->GetFirstInput(), processor->GetSecondInput());
		wxString finalAnswer = IntToWXString(theAnswer);
		displayTextbox->AppendText(finalAnswer);
		
		displayPrevInput->Clear();
		displayOperand->Clear();
		
	}
	///TODO: figure out how to get the displayTextbox to clear after you hit the equals buttong and then go to hit another button. But NOT change for like hex dec bin///
	evt.GetSkipped();
}


