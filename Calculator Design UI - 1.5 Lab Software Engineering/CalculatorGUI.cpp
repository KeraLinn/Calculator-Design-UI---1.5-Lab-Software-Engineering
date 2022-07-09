#include "CalculatorGUI.h"

wxBEGIN_EVENT_TABLE(CalculatorGUI, wxFrame)
	//blank until begin assigning functions for diff buttons.
wxEND_EVENT_TABLE()

CalculatorGUI::CalculatorGUI() : wxFrame(nullptr, wxID_ANY, "Lab 1.5 - Calculator", wxPoint(400, 150), wxSize(600, 800)) {

////Code for Cosmetics////

////End Code for Cosmetics////

	displayTextbox = new wxTextCtrl(this, wxID_ANY, " ", wxPoint(450,150), wxSize(600, 250));
	arrayOfButtons = new wxButton * [xWidth * yHeight];
	wxGridSizer* grid = new wxGridSizer(xWidth, yHeight, 0, 0);
	
	for (int x = 0; x < xWidth; x++) {
		for (int y = 0; y < yHeight; y++) {
			arrayOfButtons[y * xWidth + x] = new wxButton(this, 1000 + (y * xWidth + x));
			grid->Add(arrayOfButtons[y * xWidth + x], 1, wxEXPAND | wxALL);
		}
	}
	this->SetSizer(grid);
	grid->Layout();
}

CalculatorGUI::~CalculatorGUI()
{
	delete[] arrayOfButtons;
}
