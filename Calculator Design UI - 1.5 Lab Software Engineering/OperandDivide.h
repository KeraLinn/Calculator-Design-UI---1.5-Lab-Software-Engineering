#pragma once
#include "IBaseCommand.h"

class OperandDivide : public IBaseCommand {
public:
	OperandDivide() {};
	int resultsDivide;

	int operandDivide() {
		CalculatorProcessor* myProcessor = CalculatorProcessor::GetInstance();
		int a = myProcessor->GetFirstInput();
		int b = myProcessor->GetSecondInput();
		resultsDivide = a / b;
		return resultsDivide;
	}
	int Execute() {
		operandDivide();
		return resultsDivide;
	}
};