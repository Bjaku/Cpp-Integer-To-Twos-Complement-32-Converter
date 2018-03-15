#include <iostream>
#include "TwosComplement32Kit.h"

int main(int argc, char** argv) {
	int number = 0;
	while (cin >> number) {
		cout << toTwosComplement32(number) << endl;
	}
	return 0;
}