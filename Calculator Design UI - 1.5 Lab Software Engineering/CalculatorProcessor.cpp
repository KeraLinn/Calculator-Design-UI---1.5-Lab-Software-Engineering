#include "CalculatorProcessor.h"
#include "OperandMult.h"
#include "OperandAbsoluteValue.h"
#include "OperandAdd.h"
#include "OperandDivide.h"
#include "OperandMod.h"
#include "OperandSquared.h"
#include "OperandSubtract.h"
#include "BinaryTranslate.h"
#include "HexadecimalTranslate.h"
#include "DecimalTranslate.h"
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
	int CalculatorProcessor::ClickEquals(int firstInput, int secondInput)
	{		
		int theResults;
		_processor->SetFirstInput(firstInput);
		_processor->SetSecondInput(secondInput);
		
		switch (_processor->GetTheOperator()) {
		case 113: {
			OperandAdd myOps;
			theResults = myOps.Execute();
			break;	}
		case 114: {
			OperandSubtract myOps;
			theResults = myOps.Execute();
			break;	}
		case 115: {
			OperandMult myOps;
			theResults = myOps.Execute();
			break;	}
		case 116: {
			OperandSquared myOps;
			theResults = myOps.Execute();
			break;	}
		case 117: {
			OperandAbsoluteValue myOps;
			theResults = myOps.Execute();
			break;	}
		case 118: {
			OperandMod myOps;
			theResults = myOps.Execute();
			break;	}
		case 119: {
			OperandDivide myOps;
			theResults = myOps.Execute();
			break;	}
		}

		return theResults;
	}

