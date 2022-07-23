#pragma once
#include "IBaseCommand.h"
#include "CalculatorProcessor.h"

class OperandAdd : public IBaseCommand {
	
public:
	OperandAdd() {};
	int resultsAdd;

	int operandAdd() {
		CalculatorProcessor* myProcessor = CalculatorProcessor::GetInstance();
		int a = myProcessor->GetFirstInput();
		int b = myProcessor->GetSecondInput();

		resultsAdd = a + b;
		return resultsAdd;
	}

	int Execute() {
		operandAdd();
		return resultsAdd;
	}
	
};