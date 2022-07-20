#pragma once
#include "IBaseCommand.h"

class OperandAdd : public IBaseCommand {
public:
	int a = 0;
	int b = 0;

	int operandAdd() {
		int resultsAdd = a + b;
		didExecute = true;
		return resultsAdd;
	}
	void Execute() {
		operandAdd();
	}
};