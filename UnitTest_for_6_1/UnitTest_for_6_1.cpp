#include "pch.h"
#include "CppUnitTest.h"
#include "../Laboratorna 6_1/Lab 6_1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestfor61
{
	TEST_CLASS(UnitTestfor61)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int arr[6] = { -5, -1, 1, -4, 7, 9 };
			int t = 0;
			t = Sum(arr, 6);
			Assert::AreEqual(-10, t);
		}
	};
}
