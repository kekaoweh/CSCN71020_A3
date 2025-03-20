#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace PRIMENUMBERUnitTests
{
	TEST_CLASS(PRIMENUMBERUnitTests)
	{
	public:
		
		TEST_METHOD(Prime_TESTS)
		{
			Assert::AreEqual("Prime", isPrime(2));
			Assert::AreEqual("Prime", isPrime(3));
			Assert::AreEqual("Prime", isPrime(5));
			Assert::AreEqual("Prime", isPrime(7));
			Assert::AreEqual("Prime", isPrime(9));
		}
	};
}
