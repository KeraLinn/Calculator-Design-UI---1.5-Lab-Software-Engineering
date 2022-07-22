#pragma once
#include <string>
#include <vector>
#pragma warning(disable : 4996)
#include "wx/wx.h"

//implement this class as a singleton design pattern per the Day 6 lecture
class CalculatorProcessor 
{
private:
	CalculatorProcessor() {};
	static CalculatorProcessor* _processor;
	int baseNumber = 0;
	
	int theFirstInput;
	int theSecondInput;
	int theReturnResult;
	wxString theReturnResult2;
	int theCommand;

public:
#pragma region Getters & Setters
	static CalculatorProcessor* GetInstance() {
		if (_processor == nullptr) {
			_processor = new CalculatorProcessor();
		}
		return _processor;
	}
	void SetBaseNumber(int number) {
		baseNumber = number; }
	int GetBaseNumber() {
		return baseNumber; }
	
	
	
	void SetFirstInput(int number) {
		theFirstInput = number;
	}
	int GetFirstInput() {
		return theFirstInput;
	}
	void SetSecondInput(int number) {
		theSecondInput = number;
	}
	int GetSecondInput() {
		return theSecondInput;
	}
	void SetTheResults(int num) {
		theReturnResult2 << num;
	}
	wxString GetTheResults() {
		return theReturnResult2;
	}
	void SetTheOperator(int opsID) {
		theCommand = opsID;
	}
	int GetTheOperator() {
		return theCommand;
	}
#pragma endregion

	CalculatorProcessor(CalculatorProcessor& copy) = delete;
	void operator=(const CalculatorProcessor& assign) = delete;
	
	int ClickEquals(int firstInput, int secondInput);
	
	int GetDecimal(int firstInput) {
		int remainder, decimal = 0, i = 0;
		while (firstInput != 0) {
			remainder = firstInput % 10;
			firstInput /= 10;
			decimal += remainder * pow(2, i);
			++i;
		}
		return decimal;
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
		GetBaseNumber();
		for (int i = 0; i < 32; i++) {
			if (baseNumber % 2 == 0) {
				binaryResults = "0" + binaryResults;
			}
			else {
				binaryResults = "1" + binaryResults;
			}
			baseNumber = baseNumber / 2;
		}
		return binaryResults;
	}

	
};

