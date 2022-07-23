#pragma once
#include "IBaseCommand.h"

class OperandMult : public IBaseCommand {
public:
	OperandMult() {};
	int resultsMult;

	int operandMult() {
		CalculatorProcessor* myProcessor = CalculatorProcessor::GetInstance();
		int a = myProcessor->GetFirstInput();
		int b = myProcessor->GetSecondInput();
		resultsMult = a * b;
		return resultsMult;
	}
	int Execute() {
		operandMult();
		return resultsMult;
	}
};