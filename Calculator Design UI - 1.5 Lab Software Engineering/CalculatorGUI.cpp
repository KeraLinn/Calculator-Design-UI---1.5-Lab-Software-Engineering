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
	wxFont calculatorDisplayFont(72, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false);
	wxFont operandDisplayFont(20, wxFONTFAMILY_ROMAN, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false);
	wxFont prevInputDisplayFont(25, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false);
#pragma endregion	

	/*displayTextbox = new wxTextCtrl(this, wxID_ANY, " ", wxPoint(5, 0), wxSize(150, 200), wxTE_CENTER);
	displayTextbox->SetFont(calculatorDisplayFont);
	
	displayOperand = new wxTextCtrl(this, wxID_ANY, " ", wxPoint(165, 0), wxSize(150, 200), wxTE_CENTER);
	displayOperand->SetFont(calculatorDisplayFont);

	displayTextbox2 = new wxTextCtrl(this, wxID_ANY, " ", wxPoint(325, 0), wxSize(150, 200), wxTE_CENTER);
	displayTextbox2->SetFont(calculatorDisplayFont);
*/

	

	//displayPrevInput = new wxTextCtrl(this, wxID_ANY, " ", wxPoint(0, 100), wxSize(100, 100), wxTE_CENTER);
	//displayPrevInput->SetFont(prevInputDisplayFont);


	displayTextbox = new wxTextCtrl(this, wxID_ANY, " ", wxPoint(100, 0), wxSize(400, 200), wxTE_RIGHT);
	displayTextbox->SetFont(calculatorDisplayFont);
	
	displayOperand = new wxTextCtrl(this, wxID_ANY, " ", wxPoint(0, 0), wxSize(100, 100),wxTE_CENTER);
	displayOperand->SetFont(operandDisplayFont);

	displayPrevInput = new wxTextCtrl(this, wxID_ANY, " ", wxPoint(0, 100), wxSize(100, 100), wxTE_CENTER);
	displayPrevInput->SetFont(prevInputDisplayFont);

#pragma region Button Factory
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


	CalculatorProcessor* processor = CalculatorProcessor::GetInstance();

	processor->SetBaseNumber(198);
	std::cout << "Decimal: " << processor->GetDecimal() << std::endl;
	std::cout << "Binary: " << processor->GetBinary() << std::endl;
	std::cout << "Hexadecimal: " << processor->GetHexadecimal() << std::endl;
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
	//int firstInput = 0;
	//int secondInput = 0;

	//std::string chosenOperand = " ";
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
		case 113: {
			int firstInput = ValueFromTxtCtrlToInt(displayTextbox);
			processor->SetFirstInput(firstInput);
			displayOperand->AppendText("+");
			displayPrevInput->AppendText(IntToWXString(firstInput));
			//IBaseCommand* addCommand;
			
			displayTextbox->Clear();
			break; }
		}
		
	}
	else {
		
		///equals case
		int secondInput = ValueFromTxtCtrlToInt(displayTextbox);
		processor->SetSecondInput(secondInput);
		displayTextbox->Clear();
		
		
		
		//IBaseCommand* whatHaveIChosen;
		int theAnswer = processor->ClickEquals(processor->GetFirstInput(), processor->GetSecondInput());
		wxString finalAnswer = IntToWXString(theAnswer);
		displayTextbox->AppendText(finalAnswer);
		displayPrevInput->Clear();
		displayOperand->Clear();
		
	}
	//	case 113: {
	//		firstInput = ValueFromTxtCtrlToInt(displayTextbox);
	//		displayOperand->AppendText("+");
	//		displayPrevInput->AppendText(IntToWXString(firstInput));
	//		myChosenOp = theID;
	//		displayTextbox->Clear();
	//		break; }
	//	case 114: {

	//		break; }
	//	}
	//}
	//
	//wxString buttonLabels2[] = {"+/-", "0",".","=","1","2","3","+","4","5","6","-","7","8","9","*","x^2","|x|","mod (%)","/","Hex","Dec","Bin","C"};
	//switch (theID) {

	//case 107: { //plus
	//	
	//	displayOperand->AppendText(buttonLabels2[7]);
	//	displayTextbox->Clear();
	//	break; }

	//case 111: { //minus
	//	displayTextbox->AppendText(buttonLabels2[11]); break; }

	//case 115: { //mult
	//	displayTextbox->AppendText(buttonLabels2[15]); break; }
	//case 116: { //squared
	//	displayTextbox->AppendText(buttonLabels2[16]); break; }
	//case 117: { //absolute value
	//	displayTextbox->AppendText(buttonLabels2[17]); break; }
	//case 118: {//mod
	//	displayTextbox->AppendText(buttonLabels2[18]); break; }
	//case 119: {//divide
	//	displayTextbox->AppendText(buttonLabels2[19]); break; }
	//case 120: {//hex
	//	displayTextbox->AppendText(buttonLabels2[20]); break; }
	//case 121: {//dec
	//	displayTextbox->AppendText(buttonLabels2[21]); break; }
	//case 122: {//bin
	//	displayTextbox->AppendText(buttonLabels2[22]); break; }
	//case 123: { //clear
	//	displayTextbox->Clear(); break; }
	//}
	//evt.GetSkipped();
}

//wxString ClickEqualsDone(int firstInput, int secondInput, IBaseCommand* choice) {
//	IBaseCommand* myChoiceOps = choice;
//	myChoiceOps->Execute();
//}




