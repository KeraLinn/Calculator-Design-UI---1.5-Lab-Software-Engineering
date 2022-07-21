#pragma once
#include "IBaseCommand.h"

class OperandAdd : public IBaseCommand {
	
private:
	
	//static OperandAdd* _opsAddition;
	
public:
	OperandAdd() {};
	/*static OperandAdd* GetInstance() {
		if (_opsAddition == nullptr) {
			_opsAddition = new OperandAdd();
		}
		return _opsAddition;
	}*/


	int operandAdd();

	void Execute() {
		operandAdd();
	}
	
};