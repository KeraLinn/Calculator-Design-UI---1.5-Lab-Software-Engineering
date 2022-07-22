#pragma once
#include "IBaseCommand.h"

class OperandMod : public IBaseCommand {
public:
	OperandMod() {};
	int resultsMod;

	int operandMod() {
		CalculatorProcessor* myProcessor = CalculatorProcessor::GetInstance();
		int a = myProcessor->GetFirstInput();
		int b = myProcessor->GetSecondInput();
		resultsMod = a % b;
		return resultsMod;
	}
	int Execute() {
		operandMod();
		return resultsMod;
	}
};