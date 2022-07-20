#pragma once
#include "IBaseCommand.h"

class OperandMod : public IBaseCommand {
public:
	int a = 0;
	int b = 0;

	int operandMod() {
		int resultsMod = a % b;
		return resultsMod;
	}
	void Execute() {
		operandMod();
	}
};