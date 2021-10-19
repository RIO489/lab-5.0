#include "pch.h"
#include "CppUnitTest.h"
#include "../lab-5.0/lab-5.0.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1);
	};
	inline void UnitTest1::TestMethod1()
	{
		int z,x,c,d;
		z = pow(h(0., 1.),4); // (s,t)
		x = h(1., 0. * 0. + 1. * 1.);// (1, s*s + t*t)
		c = 1 + pow(h(0 * 1., 1.), 2);// 1+ pow(h(s*t,1),2)
		d = (z - x) / c;
		Assert::AreEqual(d, 0);
	}
}
