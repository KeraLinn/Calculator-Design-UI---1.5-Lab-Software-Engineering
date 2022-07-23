#pragma once
#include "IBaseCommand.h"
#include <stdlib.h>

class OperandAbsoluteValue : public IBaseCommand {
public:
	OperandAbsoluteValue() {};
	int resultsAbsVal;
	

	int operandAbsVal() {
		CalculatorProcessor* myProcessor = CalculatorProcessor::GetInstance();
		int a = myProcessor->GetFirstInput();
		resultsAbsVal = abs(a);
		return resultsAbsVal;
	}
	int Execute() {
		operandAbsVal();
		return resultsAbsVal;
	}
};