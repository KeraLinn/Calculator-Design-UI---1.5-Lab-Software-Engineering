#pragma once
#include "IBaseCommand.h"

class OperandSquared : public IBaseCommand {
public:
	OperandSquared() {};
	int resultsSquareVal;


	int operandSquareVal() {
		CalculatorProcessor* myProcessor = CalculatorProcessor::GetInstance();
		int a = myProcessor->GetFirstInput();
		resultsSquareVal = a * a;
		return resultsSquareVal;
	}
	int Execute() {
		operandSquareVal();
		return resultsSquareVal;
	}
};