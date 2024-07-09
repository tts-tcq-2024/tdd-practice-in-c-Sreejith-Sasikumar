#ifndef STRINGCALCULATOR_H
#define STRINGCALCULATOR_H

#include "StringCalculator.h"
#include <ctype.h>

int sumOfDigits(int s){
	int sum = 0;
	if (s<=1000){
		while(s){
			sum = sum + (s%10);
			s/=10;
		}
	}
	return sum;
}

int add(const char *str){
	int i=0, s=0, sum = 0;
	while(str[i]){
		while(isdigit(str[i++])){
			s = (s*10) + str[i-1]-'0';
		}
		sum = sum + sumOfDigits(s);
		s=0;
	}
	return sum;
}

#endif // STRINGCALCULATOR_H
