#include "pch.h"
#include "CppUnitTest.h"

extern "C" {
#include "../assignment3/primenumbers.h"
}

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace PRIMENUMBERUnitTests
{
	TEST_CLASS(PRIMENUMBERUnitTests)
	{
	public:
		
		TEST_METHOD(prime_TESTS)
		{
			Assert::AreEqual("Prime", isPrime(2)); 
			Assert::AreEqual("Prime", isPrime(3)); 
			Assert::AreEqual("Prime", isPrime(5)); 
			Assert::AreEqual("Prime", isPrime(7));
			Assert::AreEqual("Prime", isPrime(9));
		}

		 
		TEST_METHOD(notPrime_TESTS)
		{
			Assert::AreEqual("Not Prime", isPrime(4));
			Assert::AreEqual("Not Prime", isPrime(6));
			Assert::AreEqual("Not Prime", isPrime(8));
			Assert::AreEqual("Not Prime", isPrime(10));
			Assert::AreEqual("Not Prime", isPrime(12));
		}

		TEST_METHOD(edgeCases_TESTS)
		{
			Assert::AreEqual("Not Prime", isPrime(1));
			Assert::AreEqual("Not Prime", isPrime(0));
			Assert::AreEqual("Not Prime", isPrime(-3));
			Assert::AreEqual("Not Prime", isPrime(7.9));
		}
	};
}
