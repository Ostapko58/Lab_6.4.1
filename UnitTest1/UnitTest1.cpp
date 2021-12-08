#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_6.4.1/Lab_6.4.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int* arr = new int[5]{-8,18,22,-108,30};
			
			Assert::AreEqual(search(arr, 5), 30);

			delete[] arr;
		}
	};
}
