#include "IBaseCommand.h"
#include "CalculatorGUI.h"

bool didExecute = false;
int theFinalResult = 0;
int returnTheResults(int results) {
	if (didExecute == true) {
		theFinalResult = results;
		return theFinalResult;
	}
	else {
		return 0;
	}
}