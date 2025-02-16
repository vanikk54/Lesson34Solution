#include "logic.h"

int main() {
	int number;
	int pos;

	cout << "Input your number and pos: ";
	cin >> number >> pos;

	round_change(number, pos);

	cout << "Result number is "<< number << endl;

	return 0;
}