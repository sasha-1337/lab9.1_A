#include "pch.h"
#include "CppUnitTest.h"
#include "../lab9.1_A/lab9_1_A.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest91A
{
	TEST_CLASS(UnitTest91A)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			int mark_1 = 5, mark_2 = 4, mark_3 = 3;
			const int N = 1;
			t = midMark(N, mark_1, mark_2, mark_3);
			Assert::AreEqual(t, 4);
		}
	};
}
