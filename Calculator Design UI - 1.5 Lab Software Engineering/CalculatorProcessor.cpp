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
		/*OperandDivide DivideCommand;
		OperandMod ModCommand;
		OperandMult MultCommand;
		OperandSquared SquareCommand;
		OperandAbsoluteValue AbsValCommand;*/

		commandQueue.push_back(&AddCommand);
		commandQueue.push_back(&SubtractCommand);
		/*commandQueue.push_back(&DivideCommand);
		commandQueue.push_back(&ModCommand);
		commandQueue.push_back(&MultCommand);
		commandQueue.push_back(&SquareCommand);
		commandQueue.push_back(&AbsValCommand);*/

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
			break;
		}
		case 114: {
			OperandSubtract myOps;
			theResults = myOps.Execute();
			break;
			//return theResults;
		}
		}
		
		/*if (chosenOperand == 113) {

			theResults << myOps.Execute();
			
			
;
		}*/
		/*else if (chosenOperand == 114) {
			commandQueue[1]->Execute();
			return _processor->GetTheResults();
		}
		else if (chosenOperand == 115) {
			commandQueue[2]->Execute();
			return _processor->GetTheResults();
		}
		else if (chosenOperand == 116) {
			commandQueue[3]->Execute();
			return _processor->GetTheResults();
		}
		else if (chosenOperand == 117) {
			commandQueue[4]->Execute();
			return _processor->GetTheResults();
		}
		else if (chosenOperand == 118) {
			commandQueue[5]->Execute();
			return _processor->GetTheResults();
		}
		else if (chosenOperand == 119) {
			commandQueue[6]->Execute();
			return _processor->GetTheResults();
		}*/
		//return _processor->GetTheResults();
		return theResults;
	}

