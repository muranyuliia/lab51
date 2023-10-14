#include "pch.h"
#include "CppUnitTest.h"
#include "../lab51/lab51.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

double h(const double x, const double y, const double z); // ������� ���� ��������� ����� �������
double a, b;

namespace UnitTest51
{
	TEST_CLASS(UnitTest51)
	{
	public:

		TEST_METHOD(TestHFunction)
		{
		
			// Act (������ �������, ��� ���������)
			double result =  (h(a, b, 1) + h(1, a, b)) / (1 + h(a * a + b * b, 1, 0));

			// Assert (�������� ����������)
			double expected = (a + b + 1) / (a * a + b * b + 1);
			Assert::AreEqual(expected, result, 0.0001);
		}
	};
}
