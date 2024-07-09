#ifndef STRINGCALCULATOR_H
#define STRINGCALCULATOR_H

#include "StringCalculator.h"
#include <ctype.h>

int* fetchNumbers(char* str){
int nums[]={0,0};
int i=0,j=0, sum=0;
	while(str[i]){
		if(isdigit(str[i])){
			do{
				sum = sum*10+(str[i++]-'0');
			}while(isdigit(str[i]));
			nums[j++] = sum;
			sum = 0;
			i--;
		}
		i++;
	}
}

int digitsSum(int a, int b){
	int sum = 0;
	while(a){
		sum = sum + a%10;
		a/=10;
	}
	while(b){
		sum = sum + b%10;
		b/=10;
	}
	return sum;
}

int overThousand(int a, int b){
	a = a>1000?0:a;
	b = b>1000?0:b;
	return digitsSum(a,b);
}

int add(const char *input){
	int nums[2] = fetchNumbers(input);
	int sum = overThousand(nums[0], nums[1]);
	return sum;
}



#endif // STRINGCALCULATOR_H
