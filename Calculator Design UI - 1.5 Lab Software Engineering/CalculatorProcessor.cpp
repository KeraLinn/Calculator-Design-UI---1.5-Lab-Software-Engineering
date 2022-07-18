#include "CalculatorProcessor.h"
#include "ButtonFactory.h"
#include "IBaseCommand.h"


	CalculatorProcessor* _processor = nullptr;
	int a, b;

	int operandAdd() {
		int resultsAdd = a + b;
		return resultsAdd;
	}
	int operandSubtract() {
		int resultsSubtract = a - b;
		return resultsSubtract;
	}
	int operandMult() {
		int resultsMult = a * b;
		return resultsMult;
	}
	int operandDivide() {
		int resultsDivide = a / b;
		return resultsDivide;
	}
	int operandAbsVal() {
		int resultsAbsVal = abs(a);
		return resultsAbsVal;
	}
	int operandSquareVal() {
		int resultsSquareVal = a * a;
		return resultsSquareVal;
	}

	void Execute() {
		operandAdd();
		operandSubtract();
		operandMult();
		operandDivide();
		operandAbsVal();
		operandSquareVal();
	}

	

