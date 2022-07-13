#include "ButtonFactory.h"



wxButton* ButtonFactory::CreateButton0(CalculatorGUI* parentWindow) {
	//wxButton ButtonNeg(this, 100, "+/-", wxPoint(0, 700), wxSize(125, 100));
	wxButton* Button0 = new wxButton(parentWindow,101,"0", wxPoint(125,700),wxSize(125,100));
	return Button0;
}