#include "pch.h"
#include "CppUnitTest.h"
#include "../Calculator Design UI - 1.5 Lab Software Engineering/ButtonFactory.h"
#include "../Calculator Design UI - 1.5 Lab Software Engineering/ButtonFactory.cpp"
#include "../Calculator Design UI - 1.5 Lab Software Engineering/CalculatorProcessor.h"
#include "../Calculator Design UI - 1.5 Lab Software Engineering/CalculatorProcessor.cpp"
#pragma warning(disable:4996)

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CalculatorDesignTests
{
	TEST_CLASS(CalculatorDesignTests)
	{
	public:
		CalculatorProcessor* processor = CalculatorProcessor::GetInstance();
		OperandAdd OpsAdd;

		//CalculatorProcessor Test Begin
		TEST_METHOD(TwoPlusThreeEqualsFive)
		{
			int answer = OpsAdd.Execute();
			Assert::AreEqual(answer, 5);
		}
	};
}
