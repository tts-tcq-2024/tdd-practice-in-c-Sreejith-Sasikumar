#ifndef STRINGCALCULATOR_H
#define STRINGCALCULATOR_H

#include "StringCalculator.h"
#include <ctype.h>

int add(const char *input){
  int sum = 0, i=0;
  while(input[i]){
    if(isdigit(input[i])){
      sum = sum + (input[i] - '0');
    }
    i++;
  }
  return sum;
}
/* TO-DO
int* fetchNumbers(char* str){
	int nums[]={0,0};
	int i=0,j=0, sum=0;
	while(str[i])
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
*/


#endif // STRINGCALCULATOR_H
