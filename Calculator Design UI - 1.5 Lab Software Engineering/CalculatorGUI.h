#pragma once
#include "wx/wx.h"

class CalculatorGUI : public wxFrame
{
public:
	CalculatorGUI();
	~CalculatorGUI();

public:
	int xWidth = 4;
	int yHeight = 6;
	wxButton** arrayOfButtons;
	wxTextCtrl* displayTextbox = nullptr;

	void onButtonClick(wxCommandEvent& evt);

	wxDECLARE_EVENT_TABLE();
};

