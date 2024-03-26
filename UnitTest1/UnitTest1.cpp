#include "pch.h"
#include "CppUnitTest.h"
#include "..//OOP Lab 3.1/Solution.h"
#include "..//OOP Lab 3.1/Liquid.cpp"
#include "..//OOP Lab 3.1/Liquid.h"
#include "..//OOP Lab 3.1/Solution.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Liquid liquid("water", 23);
			Solution sol(liquid, 43);

			Assert::AreEqual(43, sol.getAmount());
		}
	};
}
