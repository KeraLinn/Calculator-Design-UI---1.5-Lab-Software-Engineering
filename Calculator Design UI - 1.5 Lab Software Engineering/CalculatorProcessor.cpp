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
int main()
{
		std::vector<IBaseCommand*> commandQueue;

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