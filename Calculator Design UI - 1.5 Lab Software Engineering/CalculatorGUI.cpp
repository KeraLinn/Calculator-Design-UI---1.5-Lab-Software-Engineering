#include "CalculatorGUI.h"
#include "ButtonFactory.h"

wxBEGIN_EVENT_TABLE(CalculatorGUI, wxFrame)
//EVT_BUTTON(100, CalculatorGUI::onButtonClick)
//EVT_BUTTON(100-122,CalculatorGUI::onButtonClick)
EVT_COMMAND_RANGE(100,123,wxEVT_COMMAND_BUTTON_CLICKED, CalculatorGUI::onButtonClick)
wxEND_EVENT_TABLE()

CalculatorGUI::CalculatorGUI() : wxFrame(nullptr, wxID_ANY, "Lab 1.5 - Calculator", wxPoint(400, 150), wxSize(500, 845)) {

////Code for Cosmetics////
	//Ideally space is for colors/color dialogs, pencolors/fonts etc.
	wxFont calculatorDisplayFont(72, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD,false);
////End Code for Cosmetics////
	
	

	displayTextbox = new wxTextCtrl(this, wxID_ANY, " ", wxPoint(0, 0), wxSize(500, 200));
	displayTextbox->SetFont(calculatorDisplayFont);
	
#pragma region Button Factory
	ButtonFactory factory;
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

void CalculatorGUI::onButtonClick(wxCommandEvent& evt) {
	int id = evt.GetId();
	wxString buttonLabels2[] = {"+/-", "0",".","=","1","2","3","+","4","5","6","-","7","8","9","*","x^2","|x|","mod (%)","/","Hex","Dec","Bin","C"};
	switch (id) {
	case 100: {displayTextbox->AppendText(buttonLabels2[0]); break; }
	case 101: {displayTextbox->AppendText(buttonLabels2[1]); break; }
	case 102: {displayTextbox->AppendText(buttonLabels2[2]); break; }
	case 103: {displayTextbox->AppendText(buttonLabels2[3]); break; }
	case 104: {displayTextbox->AppendText(buttonLabels2[4]); break; }
	case 105: {displayTextbox->AppendText(buttonLabels2[5]); break; }
	case 106: {displayTextbox->AppendText(buttonLabels2[6]); break; }
	case 107: {displayTextbox->AppendText(buttonLabels2[7]); break; }
	case 108: {displayTextbox->AppendText(buttonLabels2[8]); break; }
	case 109: {displayTextbox->AppendText(buttonLabels2[9]); break; }
	case 110: {displayTextbox->AppendText(buttonLabels2[10]); break; }
	case 111: {displayTextbox->AppendText(buttonLabels2[11]); break; }
	case 112: {displayTextbox->AppendText(buttonLabels2[12]); break; }
	case 113: {displayTextbox->AppendText(buttonLabels2[13]); break; }
	case 114: {displayTextbox->AppendText(buttonLabels2[14]); break; }
	case 115: {displayTextbox->AppendText(buttonLabels2[15]); break; }
	case 116: {displayTextbox->AppendText(buttonLabels2[16]); break; }
	case 117: {displayTextbox->AppendText(buttonLabels2[17]); break; }
	case 118: {displayTextbox->AppendText(buttonLabels2[18]); break; }
	case 119: {displayTextbox->AppendText(buttonLabels2[19]); break; }
	case 120: {displayTextbox->AppendText(buttonLabels2[20]); break; }
	case 121: {displayTextbox->AppendText(buttonLabels2[21]); break; }
	case 122: {displayTextbox->AppendText(buttonLabels2[22]); break; }
	case 123: {displayTextbox->AppendText(buttonLabels2[23]); break; } //this should actually clear the screen, but displayTextBox->Clear() doesn't do it yet.
	}

}




