#ifndef STRINGCALCULATOR_H
#define STRINGCALCULATOR_H

#include "StringCalculator.h"
#include <ctype.h>

int digitSum = 0;
void sumOfDigits(int s){
	while(s){
		digitSum = digitSum + s%10;
		s/=10;
	}
}

int add(const char *str){
	int i=0, s=0;
	while(str[i]){
		while(isdigit(str[i++])){
			s = s*10 + str[i-1]-'0';
		}
		if (s<=1000)
			sumOfDigits(s);
		s=0;
	}
	return digitSum;
}

#endif // STRINGCALCULATOR_H
