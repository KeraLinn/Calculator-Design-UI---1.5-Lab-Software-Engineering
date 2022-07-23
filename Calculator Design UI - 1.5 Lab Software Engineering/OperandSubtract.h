#pragma once
#include "IBaseCommand.h"

class OperandSubtract : public IBaseCommand {
public:
	OperandSubtract() {};
	int resultsSubtract;

	int operandSubtract() {
		CalculatorProcessor* myProcessor = CalculatorProcessor::GetInstance();
		int a = myProcessor->GetFirstInput();
		int b = myProcessor->GetSecondInput();

		resultsSubtract = a - b;
		return resultsSubtract;
	}
	int Execute() {
		operandSubtract();
		return resultsSubtract;
	}
};