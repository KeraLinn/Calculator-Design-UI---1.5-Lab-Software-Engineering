#include "CalculatorGUI.h"
#include "ButtonFactory.h"

wxBEGIN_EVENT_TABLE(CalculatorGUI, wxFrame)
//EVT_BUTTON(100, CalculatorGUI::onButtonClick)
//EVT_BUTTON(100-122,CalculatorGUI::onButtonClick)
EVT_COMMAND_RANGE(100,123,wxEVT_COMMAND_BUTTON_CLICKED, CalculatorGUI::onButtonClick)
wxEND_EVENT_TABLE()

CalculatorGUI::CalculatorGUI() : wxFrame(nullptr, wxID_ANY, "Lab 1.5 - Calculator", wxPoint(400, 150), wxSize(500, 845)) {

////Code for Cosmetics////
	std::string buttonLabels[] = { "+/-", "0",".","=","1","2","3","+","4","5","6","-","7","8","9","*","x^2","|x|","mod (%)","/","Hex","Dec","Bin","C" };
	//Ideally space is for colors/color dialogs, pencolors/fonts etc.
	wxFont calculatorDisplayFont(72, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD,false);
	wxFont calculatorButtonFont(45, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_MEDIUM, false);
////End Code for Cosmetics////
	
	ButtonFactory factory;

	displayTextbox = new wxTextCtrl(this, wxID_ANY, " ", wxPoint(0, 0), wxSize(500, 200));
	displayTextbox->SetFont(calculatorDisplayFont);
	
	wxButton* Button0 = factory.CreateButton0(this);

	
/*
#pragma region Button Creation

	//Button0 = new wxButton(this, 101, "0", wxPoint(125, 700), wxSize(125, 100));
	ButtonDot = new wxButton(this, 102, ".", wxPoint(250, 700), wxSize(125, 100));
	ButtonEquals = new wxButton(this, 103, "=", wxPoint(375, 700), wxSize(125, 100));

	Button1 = new wxButton(this, 104, "1", wxPoint(0, 600), wxSize(125, 100));
	Button2 = new wxButton(this, 105, "2", wxPoint(125, 600), wxSize(125, 100));
	Button3 = new wxButton(this, 106, "3", wxPoint(250, 600), wxSize(125, 100));
	ButtonPlus = new wxButton(this, 107, "+", wxPoint(375, 600), wxSize(125, 100));

	Button4 = new wxButton(this, 108, "4", wxPoint(0, 500), wxSize(125, 100));
	Button5 = new wxButton(this, 109, "5", wxPoint(125, 500), wxSize(125, 100));
	Button6 = new wxButton(this, 110, "6", wxPoint(250, 500), wxSize(125, 100));
	ButtonMinus = new wxButton(this, 111, "-", wxPoint(375, 500), wxSize(125, 100));

	Button7 = new wxButton(this, 112, "7", wxPoint(0, 400), wxSize(125, 100));
	Button8 = new wxButton(this, 113, "8", wxPoint(125, 400), wxSize(125, 100));
	Button9 = new wxButton(this, 114, "9", wxPoint(250, 400), wxSize(125, 100));
	ButtonMult = new wxButton(this, 115, "*", wxPoint(375, 400), wxSize(125, 100));

	ButtonSquared = new wxButton(this, 116, "x^2", wxPoint(0, 300), wxSize(125, 100));
	ButtonAbsVal = new wxButton(this, 117, "|x|", wxPoint(125, 300), wxSize(125, 100));
	ButtonMod = new wxButton(this, 118, "mod (%)", wxPoint(250, 300), wxSize(125, 100));
	ButtonDiv = new wxButton(this, 119, "/", wxPoint(375, 300), wxSize(125, 100));

	ButtonHex = new wxButton(this, 120, "Hex", wxPoint(0, 200), wxSize(125, 100));
	ButtonDec = new wxButton(this, 121, "Dec", wxPoint(125, 200), wxSize(125, 100));
	ButtonBin = new wxButton(this, 122, "Bin", wxPoint(250, 200), wxSize(125, 100));
	ButtonClear = new wxButton(this, 123, "C", wxPoint(375, 200), wxSize(125, 100));
#pragma endregion
*/
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




