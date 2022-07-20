#pragma once
#include "IBaseCommand.h"

class OperandSubtract : public IBaseCommand {
public:
	int a = 0;
	int b = 0;

	int operandSubtract() {
		int resultsSubtract = a - b;
		return resultsSubtract;
	}
	void Execute() {
		operandSubtract();
	}
};