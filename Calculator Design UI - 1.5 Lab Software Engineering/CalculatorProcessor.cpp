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
	int CalculatorProcessor::ClickEquals(int firstInput, int secondInput, std::string chosenOperand)
	{
		
		_processor->SetFirstInput(firstInput);
		_processor->SetSecondInput(secondInput);
		if (chosenOperand == "AddCommand") {
			commandQueue[0]->Execute();
		}
		else if (chosenOperand == "SubtractCommand") {
			commandQueue[1]->Execute();
		}
		else if (chosenOperand == "DivideCommand") {
			commandQueue[2]->Execute();
		}
		else if (chosenOperand == "ModCommand") {
			commandQueue[3]->Execute();
		}
		else if (chosenOperand == "MultCommand") {
			commandQueue[4]->Execute();
		}
		else if (chosenOperand == "SquareCommand") {
			commandQueue[5]->Execute();
		}
		else if (chosenOperand == "AbsValCommand") {
			commandQueue[6]->Execute();
		}
		return _processor->GetTheResults();
	}
