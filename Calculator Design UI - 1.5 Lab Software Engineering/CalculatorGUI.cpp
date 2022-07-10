#include "CalculatorGUI.h"

wxBEGIN_EVENT_TABLE(CalculatorGUI, wxFrame)
	//blank until begin assigning functions for diff buttons.
wxEND_EVENT_TABLE()

CalculatorGUI::CalculatorGUI() : wxFrame(nullptr, wxID_ANY, "Lab 1.5 - Calculator", wxPoint(400, 150), wxSize(500, 800)) {

////Code for Cosmetics////
	std::string buttonLabels[] = { "+/-", "0",".","=","1","2","3","+","4","5","6","-","7","8","9","*","x^2","|x|","mod (%)","/","Hex","Dec","Bin","C" };
	//Ideally space is for colors/color dialogs, pencolors/fonts etc.
	wxFont calculatorDisplayFont(72, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD,false);
	wxFont calculatorButtonFont(45, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_MEDIUM, false);
////End Code for Cosmetics////
	

	displayTextbox = new wxTextCtrl(this, wxID_ANY, " ", wxPoint(0,0), wxSize(500, 200));
	displayTextbox->SetFont(calculatorDisplayFont);


	ButtonNeg = new wxButton(this, 100, buttonLabels[0], wxPoint(0, 700), wxSize(125, 100));
	Button0 = new wxButton(this, 101, buttonLabels[1], wxPoint(125, 700), wxSize(125, 100));
	ButtonDot = new wxButton(this, 102, buttonLabels[2], wxPoint(250, 700), wxSize(125, 100));
	ButtonEquals = new wxButton(this, 102, buttonLabels[3], wxPoint(375, 700), wxSize(125, 100));

	Button1 = new wxButton(this, 103, buttonLabels[4], wxPoint(0, 600), wxSize(125, 100));
	Button2 = new wxButton(this, 104, buttonLabels[5], wxPoint(125, 600), wxSize(125, 100));
	Button3 = new wxButton(this, 105, buttonLabels[6], wxPoint(250, 600), wxSize(125, 100));
	ButtonPlus = new wxButton(this, 106, buttonLabels[7], wxPoint(375, 600), wxSize(125, 100));

	Button4 = new wxButton(this, 107, buttonLabels[8], wxPoint(0, 500), wxSize(125, 100));
	Button5 = new wxButton(this, 108, buttonLabels[9], wxPoint(125, 500), wxSize(125, 100));
	Button6 = new wxButton(this, 109, buttonLabels[10], wxPoint(250, 500), wxSize(125, 100));
	ButtonMinus = new wxButton(this, 110, buttonLabels[11], wxPoint(375, 500), wxSize(125, 100));
	
	Button7 = new wxButton(this, 111, buttonLabels[12], wxPoint(0, 400), wxSize(125, 100));
	Button8 = new wxButton(this, 112, buttonLabels[13], wxPoint(125, 400), wxSize(125, 100));
	Button9 = new wxButton(this, 113, buttonLabels[14], wxPoint(250, 400), wxSize(125, 100));
	ButtonMult = new wxButton(this, 114, buttonLabels[15], wxPoint(375, 400), wxSize(125, 100));

	ButtonSquared = new wxButton(this, 115, buttonLabels[16], wxPoint(0, 300), wxSize(125, 100));
	ButtonAbsVal = new wxButton(this, 116, buttonLabels[17], wxPoint(125, 300), wxSize(125, 100));
	ButtonMod = new wxButton(this, 117, buttonLabels[18], wxPoint(250, 300), wxSize(125, 100));
	ButtonDiv = new wxButton(this, 118, buttonLabels[19], wxPoint(375, 300), wxSize(125, 100));
	
	ButtonHex = new wxButton(this, 119, buttonLabels[20], wxPoint(0, 200), wxSize(125, 100));
	ButtonDec = new wxButton(this, 120, buttonLabels[21], wxPoint(125, 200), wxSize(125, 100));
	ButtonBin = new wxButton(this, 121, buttonLabels[22], wxPoint(250, 200), wxSize(125, 100));
	ButtonClear = new wxButton(this, 122, buttonLabels[23], wxPoint(375, 200), wxSize(125, 100));
	
	
	
	//arrayOfButtons = new wxButton * [xWidth * yHeight];
	//arrayOfButtons->set(this, wxID_ANY, " ",wxPoint(590, 225),wxSize();
	/*wxGridSizer* grid = new wxGridSizer(yHeight, xWidth,0,0);
	
	for (int x = 0; x < xWidth; x++) {
		for (int y = 0; y < yHeight; y++) {
			arrayOfButtons[y * xWidth + x] = new wxButton(this, 1000 + (y * xWidth + x));
			
			grid->Add(arrayOfButtons[y * xWidth + x], 1, wxEXPAND | wxALL);
			arrayOfButtons[y * xWidth + x]->SetAutoLayout(grid);
		}
	}
	this->SetSizer(grid);
	grid->Layout();*/
}

CalculatorGUI::~CalculatorGUI()
{
	//delete[] arrayOfButtons;
}
