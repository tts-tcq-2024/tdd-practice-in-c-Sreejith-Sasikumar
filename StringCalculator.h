#ifndef STRINGCALCULATOR_H
#define STRINGCALCULATOR_H

#include "StringCalculator.h"
#include <ctype.h>
int nums[]={0,0};

void fetchNumbers(const char* str){
	int i=0,j=0, sum=0;
	while(str[i]){
		if(isdigit(str[i])){
			while(isdigit(str[i]))
				sum = sum*10+(str[i++]-'0');
			nums[j++] = sum;
			sum = 0;
			i--;
		}
		i++;
	}
}

void overThousand(){
	nums[0] = nums[0]>1000?0:nums[0];
	nums[1] = nums[1]>1000?0:nums[1];
}

int add(const char *input){
	fetchNumbers(input);
	overThousand();
	int sum = 0;
	while(nums[0]){
		sum = sum + nums[0]%10;
		nums[0]/=10;
	}
	while(nums[1]){
		sum = sum + nums[1]%10;
		nums[1]/=10;
	}
	return sum;
}



#endif // STRINGCALCULATOR_H
