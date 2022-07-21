#pragma once
#include "OperandAdd.h"
#include "CalculatorProcessor.h"

int OperandAdd::operandAdd() {
	
	CalculatorProcessor* myProcessor = CalculatorProcessor::GetInstance();
	int a = myProcessor->GetFirstInput();
	int b = myProcessor->GetSecondInput();
	
	int resultsAdd = a + b;
	myProcessor->SetTheResults(resultsAdd);
	return resultsAdd;
}
