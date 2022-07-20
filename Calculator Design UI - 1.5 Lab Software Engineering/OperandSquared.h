#pragma once
#include "IBaseCommand.h"

class OperandSquared : public IBaseCommand {
public:
	int a = 0;


	int operandSquareVal() {
		int resultsSquareVal = a * a;
		return resultsSquareVal;
	}
	void Execute() {
		operandSquareVal();
	}
};