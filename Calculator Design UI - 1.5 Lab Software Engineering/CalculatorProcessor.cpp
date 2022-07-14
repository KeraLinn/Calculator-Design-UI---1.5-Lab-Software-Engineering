#include "CalculatorProcessor.h"

CalculatorProcessor* CalculatorProcessor::GetInstance() {
	if (_processor == nullptr) {
		_processor = new CalculatorProcessor();
	}
	return _processor;
}

void CalculatorProcessor::SetBaseNumber(int number)
{
	baseNumber = number;
}

std::string CalculatorProcessor::GetDecimal()
{
	return std::to_string(baseNumber);
}

std::string CalculatorProcessor::GetHexadecimal()
{
	
}

std::string CalculatorProcessor::GetBinary()
{
	std::string binaryResults = "";
	int number = baseNumber;
	for (int i = 0; i < 32; i++) {
		if (number % 2 == 0) {
			binaryResults = "0" + binaryResults;
		}
		else {
			binaryResults = "1" + binaryResults;
		}
		number = number / 2;
	}


	return binaryResults;
}
