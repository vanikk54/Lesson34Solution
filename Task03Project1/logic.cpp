#include "logic.h"

int count(int number) {
	int c = 0;

	while (number != 0) {
		number /= 10;
		c++;		
	}

	return c;
}

void round_change(int& number, int pos) {
	int c = count(number);
	int p = pow(10, c - 1);

	for (int i = 0; i < pos; i++)
	{
		int digit = number % 10 * p;
		number /= 10;
		number += digit;
	}
}