#include "CalculatorProcessor.h"
#include "ButtonFactory.h"

CalculatorProcessor* CalculatorProcessor::_processor = nullptr;

int operandAdd(int a, int b) {
	int resultsAdd = a + b;
	return resultsAdd;
}
int operandSubtract(int a, int b) {
	int resultsSubtract = a - b;
	return resultsSubtract;
}
int operandMult(int a, int b) {
	int resultsMult = a * b;
	return resultsMult;
}
int operandDivide(int a, int b) {
	int resultsDivide = a / b;
	return resultsDivide;
}
int operandAbsVal(int a) {
	int resultsAbsVal = abs(a);
	return resultsAbsVal;
}
int operandSquareVal(int a) {
	int resultsSquareVal = a * a;
	return resultsSquareVal;
}
