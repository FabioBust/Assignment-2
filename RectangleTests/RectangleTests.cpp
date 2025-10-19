#include "pch.h"
#include "CppUnitTest.h"
#include "../BCSRec/rectangle.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace RectangleTests
{
	TEST_CLASS(RectangleTests)
	{
	public:
		
		//Test getPerimeter
		TEST_METHOD(Test_getPerimeter)
		{
			int length = 5;
			int width = 2;
			int perimeter = getPerimeter(&length, &width);
			Assert::AreEqual(14, perimeter); //expected 2*(5+2)=14
		}

		//Test getArea
		TEST_METHOD(Test_getArea)
		{
			int length = 5;
			int width = 2;
			int area = getArea(&length, &width);
			Assert::AreEqual(10, area); //expected 5*2=10
		}

		//Test setLength with usual value
		TEST_METHOD(Test_setLength_Usual)
		{
			int length = 0;
			setLength(50, &length);
			Assert::AreEqual(50, length);
		}

		//Test setLength with edge value
		TEST_METHOD(Test_setLength_Edge)
		{
			int length = 0;
			setLength(1, &length);
			Assert::AreEqual(1, length);
		}

		//Test setLength with unusual value
		TEST_METHOD(Test_setLength_Unusual)
		{
			int length = 0;
			setLength(-5, &length); //invalid
			Assert::AreEqual(0, length); //should stay unchanged
		}

		//Test setWidth with usual value
		TEST_METHOD(Test_setWidth_Usual)
		{
			int width = 0;
			setWidth(25, &width);
			Assert::AreEqual(25, width);
		}

		//Test setWidth with edge value
		TEST_METHOD(Test_setWidth_Edge)
		{
			int width = 0;
			setWidth(99, &width);
			Assert::AreEqual(99, width);
		}
		
		//Test setWidth with unusual value
		TEST_METHOD(Test_setWidth_Unusual)
		{
			int width = 0;
			setWidth(0, &width); //invalid
			Assert::AreEqual(0, width); //should stay unchanged
		}
	};
}