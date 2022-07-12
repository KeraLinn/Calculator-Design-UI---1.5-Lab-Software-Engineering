#include "ButtonFactory.h"

wxButton* ButtonFactory::CreateButton0(wxWindow parentWindow, wxPoint pt) {
	//wxButton ButtonNeg(this, 100, "+/-", wxPoint(0, 700), wxSize(125, 100));
	wxButton Button0;
	Button0.SetId(101);
	Button0.SetLabel("0");
	Button0.SetSize(125, 100);
	Button0.SetPosition(pt);
	//Button0.SetParent(CalculatorGUI::CalculatorGUI():wxFrame);
	//(this, 101, "0", wxPoint(125, 700), wxSize(125, 100));
	return &Button0;
}