#pragma once
#include "IBaseCommand.h"

class OperandAdd : public IBaseCommand {
	
public:
	OperandAdd() {};

	int operandAdd();

	void Execute() {
		operandAdd();
	}
	
};