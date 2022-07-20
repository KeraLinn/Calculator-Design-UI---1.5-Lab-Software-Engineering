#include "CalculatorProcessor.h"
#include "OperandMult.h"
#include "OperandAbsoluteValue.h"
#include "OperandAdd.h"
#include "OperandDivide.h"
#include "OperandMod.h"
#include "OperandSquared.h"
#include "OperandSubtract.h"
#include <vector>
#include "IBaseCommand.h"


	CalculatorProcessor* CalculatorProcessor::_processor = nullptr;

	std::vector<IBaseCommand*> commandQueue;

	int main()
	{
		OperandAdd AddCommand;
		OperandSubtract SubtractCommand;
		OperandDivide DivideCommand;
		OperandMod ModCommand;
		OperandMult MultCommand;
		OperandSquared SquareCommand;
		OperandAbsoluteValue AbsValCommand;

		commandQueue.push_back(&AddCommand);
		commandQueue.push_back(&SubtractCommand);
		commandQueue.push_back(&DivideCommand);
		commandQueue.push_back(&ModCommand);
		commandQueue.push_back(&MultCommand);
		commandQueue.push_back(&SquareCommand);
		commandQueue.push_back(&AbsValCommand);
	}
	int CalculatorProcessor::ClickEquals(int firstInput, int secondInput, int chosenOperand)
	{
		//107 = +, 111 = -, 115 = *, 116 = ^ 2, 117 = | x | , 118 = %, 119 = / , 120 = hex, 121 = dec, 122 = bin,
		switch (chosenOperand) {
		case 107: {
			commandQueue[0]->Execute(); break; }
		case 111: {
			commandQueue[1]->Execute(); break; }
		case 115: {
			commandQueue[4]->Execute(); break; }
		case 116: {
			commandQueue[5]->Execute(); break; }
		case 117: {
			commandQueue[6]->Execute(); break; }
		case 118: {
			commandQueue[3]->Execute(); break; }
		case 119: {
			commandQueue[2]->Execute(); break; }
		}
		return 0;
	}
