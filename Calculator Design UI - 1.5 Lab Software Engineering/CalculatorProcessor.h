#pragma once
#include <string>
#include "IBaseCommand.h"
#pragma warning(disable : 4996)

//implement this class as a singleton design pattern per the Day 6 lecture
class CalculatorProcessor 
{
private:
	CalculatorProcessor() {};
	static CalculatorProcessor* _processor;
	int baseNumber = 0;

public:
	
	static CalculatorProcessor* GetInstance() {
		if (_processor == nullptr) {
			_processor = new CalculatorProcessor();
		}
		return _processor;
	}
	void SetBaseNumber(int number) {
		baseNumber = number;
	}
	int operandAdd();
	int operandSubtract();
	int operandMult();
	int operandDivide();
	int operandAbsVal();
	int operandSquareVal();

	
	CalculatorProcessor(CalculatorProcessor& copy) = delete;
	void operator=(const CalculatorProcessor& assign) = delete;

	std::string GetDecimal() {
		return std::to_string(baseNumber);
	}
	std::string GetHexadecimal() {
		std::string hexadecimalResults = "";
		int number = baseNumber;
		while (number > 0) {
			int mod = number % 16;
			if (mod < 10) {
				hexadecimalResults = std::to_string(mod) + hexadecimalResults;
			}
			else if (mod == 10) {
				hexadecimalResults = "A" + hexadecimalResults;
			}
			else if (mod == 11) {
				hexadecimalResults = "B" + hexadecimalResults;
			}
			else if (mod == 12) {
				hexadecimalResults = "C" + hexadecimalResults;
			}
			else if (mod == 13) {
				hexadecimalResults = "D" + hexadecimalResults;
			}
			else if (mod == 14) {
				hexadecimalResults = "E" + hexadecimalResults;
			}
			else if (mod == 15) {
				hexadecimalResults = "F" + hexadecimalResults;
			}
			number = number / 16;
		}
		hexadecimalResults = "0x" + hexadecimalResults;
		return hexadecimalResults;
	}
	std::string GetBinary() {
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


};

