#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_5.5/Lab_5.5.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
        TEST_METHOD(Test1)
        {
            int b = 3, p = 4, m = 5;
            int expected = 1;
            int result = R(b, p, m);
            Assert::AreEqual(expected, result);
        }

        TEST_METHOD(Test2)
        {
            int b = 2, p = 6, m = 7;
            int expected = 1;
            int result = R(b, p, m);
            Assert::AreEqual(expected, result);
        }

        TEST_METHOD(Test3)
        {
            int b = 5, p = 3, m = 13;
            int expected = 8;
            int result = R(b, p, m);
            Assert::AreEqual(expected, result);
        }
	};
}
