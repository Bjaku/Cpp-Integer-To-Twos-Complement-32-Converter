#include "TwosComplement32Kit.h"

char signOfNumber(int number) {
	return (number >= 0) ? PLUS : MINUS;
}

//Function allows to convert integer number into Two's complement 32-bits number
string toTwosComplement32(int number) {
	string binaryNumber = "";
	char sign = 0;				//Sign of integer number
	const char LSB_POS = 31;	//Least significant bit	position in string
	const char MSB_POS = 0;		//Most significant bit position in string
	sign = signOfNumber(number);
	for (int i = LSB_POS - 1; i >= MSB_POS; --i) {	//At first happen conversion into binary absolute value
		if (abs(number) - pow(2.0, i) >= 0) {
			number = abs(number) - pow(2.0, i);
			binaryNumber += "1";
		}
		else {
			binaryNumber += "0";
		}
	}
	binaryNumber = "0" + binaryNumber;
	if (sign == MINUS) {	//Conversion to opposite number
		int position = 0;
		for (int i = LSB_POS; i >= MSB_POS; --i) {
			if (binaryNumber[i] == '1') {
				position = i;
				break;
			}
		}
		int firstNumberToNegate = position - 1;
		for (int i = firstNumberToNegate; i >= MSB_POS; --i) {
			if (binaryNumber[i] == '0') {
				binaryNumber[i] = '1';
			}
			else {
				binaryNumber[i] = '0';
			}
		}
	}
	return binaryNumber;
}