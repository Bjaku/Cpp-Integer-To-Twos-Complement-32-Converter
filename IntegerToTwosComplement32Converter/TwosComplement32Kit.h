#pragma once

#include <cstdlib>
#include <string>
#include <cmath>

using namespace std;

enum SIGN {
	PLUS,
	MINUS,
};

char signOfNumber(int number);
string toTwosComplement32(int number);