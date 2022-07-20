#include "CalculatorGUI.h"
#include "ButtonFactory.h"
#include "CalculatorProcessor.h"
#include "Operands.h"


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

	displayTextbox = new wxTextCtrl(this, 5000, " ", wxPoint(100, 0), wxSize(400, 200), wxTE_RIGHT);
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

#pragma region ProcessorSetup
	CalculatorProcessor* processor = CalculatorProcessor::GetInstance();

	processor->SetBaseNumber(198);
	std::cout << "Decimal: " << processor->GetDecimal() << std::endl;
	std::cout << "Binary: " << processor->GetBinary() << std::endl;
	std::cout << "Hexadecimal: " << processor->GetHexadecimal() << std::endl;
#pragma endregion

#pragma region ICommand
	std::vector<IBaseCommand*> commands;
	IBaseCommand* AddCommand;
	IBaseCommand* SubtractCommand;
	IBaseCommand* MultCommand;
	IBaseCommand* DivideCommand;
	IBaseCommand* AbsValCommand;
	IBaseCommand* SquareValCommand;
	CalculatorProcessor* proAdd = CalculatorProcessor::GetInstance();
	commands.push_back(AddCommand);
	commands.push_back(SubtractCommand);
	commands.push_back(MultCommand);
	commands.push_back(DivideCommand);
	commands.push_back(AbsValCommand);
	commands.push_back(SquareValCommand);
#pragma endregion
	
}

CalculatorGUI::~CalculatorGUI()
{
}




int CalculatorGUI::ValueFromTxtCtrlToInt()
{
	wxString str = displayTextbox->GetValue();
	int theNum = wxAtoi(str);
	return theNum;
}

wxString CalculatorGUI::IntToWXString(int x)
{
	wxString theString; 
	theString << x;
	return theString;
}

void CalculatorGUI::ClickEquals(wxCommandEvent& evtEqualClick)
{//will need to clear displayTextbox and displayOperand together
	
#pragma region ICommand
	std::vector<IBaseCommand*> commands;
	/*IBaseCommand* AddCommand = (Operands*)ops->operandAdd(a, b);
	IBaseCommand* SubtractCommand = (Operands*)ops->operandSubtract(a, b);
	IBaseCommand* MultCommand = (Operands*)ops->operandMult(a, b);
	IBaseCommand* DivideCommand = (Operands*)ops->operandDivide(a, b);
	IBaseCommand* AbsValCommand = (Operands*)ops->operandAbsVal(a);
	IBaseCommand* SquareValCommand = (Operands*)ops->operandSquareVal(a);
	commands.push_back(AddCommand);
	commands.push_back(SubtractCommand);
	commands.push_back(MultCommand);
	commands.push_back(DivideCommand);
	commands.push_back(AbsValCommand);
	commands.push_back(SquareValCommand);*/
#pragma endregion
	
}

void CalculatorGUI::onButtonClick(wxCommandEvent& evt) {

	int theID = evt.GetId();
	int inputRound = 1;
	int firstInput = NULL;
	int secondInput = NULL;
	//100 = neg, 102 = dot, 103 = =,107 = +, 111 = -, 115 = *, 116 = ^2, 117 = |x|, 118 = %, 119 = /, 120 = hex, 121 = dec, 122 = bin, 123 = C
	wxString buttonLabels2[] = {"+/-", "0",".","=","1","2","3","+","4","5","6","-","7","8","9","*","x^2","|x|","mod (%)","/","Hex","Dec","Bin","C"};
	switch (theID) {
	case 100: { //negative
		int theNegative = ValueFromTxtCtrlToInt();
		displayTextbox->Clear();
		theNegative = theNegative * -1;

		displayTextbox->AppendText(IntToWXString(theNegative)); break; }
	case 101: {displayTextbox->AppendText(buttonLabels2[1]); break; }
	case 102: {//dot
		displayTextbox->AppendText(buttonLabels2[2]); break; }
	case 103: {
		//ClickEquals();
		break; }
	case 104: {displayTextbox->AppendText(buttonLabels2[4]); break; }
	case 105: {displayTextbox->AppendText(buttonLabels2[5]); break; }
	case 106: {displayTextbox->AppendText(buttonLabels2[6]); break; }
	case 107: { //plus
		firstInput = ValueFromTxtCtrlToInt();
		/*if (firstInput != NULL) {
			firstInput = ValueFromTxtCtrlToInt();
		}*/
		displayOperand->AppendText(buttonLabels2[7]);
		//displayTextbox->Clear();
		/* was trying to do fancy by storing first input, then second input, and if you're doing a third or more number, combine those 2 inputs first and then accept the next input. It didn't work here - I think I may need to have another method separate from the click equals that's specifically for getting 2 inputs & storing them?
		if (inputRound == 1) {
			firstInput = ValueFromTxtCtrlToInt();
			inputRound = inputRound + 1;
			break;
		}
		if (inputRound == 2) {
			displayTextbox->Clear();
			secondInput = ValueFromTxtCtrlToInt();
			inputRound = inputRound + 1;
			break;
		}
		if (inputRound > 2) {
			firstInput = firstInput + secondInput;
			displayTextbox->Clear();
			secondInput = ValueFromTxtCtrlToInt();
			inputRound = 3;
			break;
		}*/
		break;
	}
	case 108: {displayTextbox->AppendText(buttonLabels2[8]); break; }
	case 109: {displayTextbox->AppendText(buttonLabels2[9]); break; }
	case 110: {displayTextbox->AppendText(buttonLabels2[10]); break; }
	case 111: { //minus
		displayTextbox->AppendText(buttonLabels2[11]); break; }
	case 112: {displayTextbox->AppendText(buttonLabels2[12]); break; }
	case 113: {displayTextbox->AppendText(buttonLabels2[13]); break; }
	case 114: {displayTextbox->AppendText(buttonLabels2[14]); break; }
	case 115: { //mult
		displayTextbox->AppendText(buttonLabels2[15]); break; }
	case 116: { //squared
		displayTextbox->AppendText(buttonLabels2[16]); break; }
	case 117: { //absolute value
		displayTextbox->AppendText(buttonLabels2[17]); break; }
	case 118: {//mod
		displayTextbox->AppendText(buttonLabels2[18]); break; }
	case 119: {//divide
		displayTextbox->AppendText(buttonLabels2[19]); break; }
	case 120: {//hex
		displayTextbox->AppendText(buttonLabels2[20]); break; }
	case 121: {//dec
		displayTextbox->AppendText(buttonLabels2[21]); break; }
	case 122: {//bin
		displayTextbox->AppendText(buttonLabels2[22]); break; }
	case 123: { //clear
		displayTextbox->Clear(); break; }
	}
	//evt.GetSkipped();
}




