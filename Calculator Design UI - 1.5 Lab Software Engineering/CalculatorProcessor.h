#pragma once
#include <string>

//implement this class as a singleton design pattern per the Day 6 lecture
class CalculatorProcessor
{
private:
	static CalculatorProcessor* _processor;
	int baseNumber;
	CalculatorProcessor();

public:
	static CalculatorProcessor* GetInstance();
	void SetBaseNumber(int number);

	CalculatorProcessor(CalculatorProcessor& copy) = delete;
	void operator=(const CalculatorProcessor& assign) = delete;

	std::string GetDecimal();
	std::string GetHexadecimal();
	std::string GetBinary();
};

