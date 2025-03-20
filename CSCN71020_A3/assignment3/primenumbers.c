#include "primenumbers.h"
#include <stdio.h>

// function that checks if numbers are prime or not
const char* isPrime(int num) {
	if (num < 2) {
		return "Not Prime";
	}
	for (int i = 2; i * i <= num; i++) {
		if (num % i == 0) {
			return "Not Prime";
		}
	}
	return "Prime";
}