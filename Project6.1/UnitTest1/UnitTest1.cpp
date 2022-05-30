#include "pch.h"
#include "CppUnitTest.h"
#include "D:\Study\ООП\Project6.1\Project6.1\Array.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double LastNumber = 0;
			double max = 46;
			double s = 0;
			Array a;
			a.Number();
			Assert::AreEqual(a.Number(), s);

		}
	};
}
