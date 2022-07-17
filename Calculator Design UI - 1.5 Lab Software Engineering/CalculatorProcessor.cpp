#include "CalculatorProcessor.h"
#include "ButtonFactory.h"


CalculatorProcessor* CalculatorProcessor::_processor = nullptr;


int CalculatorProcessor::operandAdd(int a, int b) {
	int resultsAdd = a + b;
	return resultsAdd;
}

int CalculatorProcessor::operandSubtract(int a, int b) {
	int resultsSubtract = a - b;
	return resultsSubtract;
}
int CalculatorProcessor::operandMult(int a, int b) {
	int resultsMult = a * b;
	return resultsMult;
}
int CalculatorProcessor::operandDivide(int a, int b) {
	int resultsDivide = a / b;
	return resultsDivide;
}
