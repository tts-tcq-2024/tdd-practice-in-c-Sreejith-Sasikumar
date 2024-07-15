#include <ctype.h>

bool isNegative(const char* str){
	int i = 0;
	while(str[i]){
		if(str[i] == '-'){
			printf("Negatives not allowed\n");
			return true;
		}
		i++;
	}
	return false;
}

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
/* 
Function: fetchNumberFromString
	Used to fetch the numbers (in integer format) from the input string
Parameters: 
	str: 	Input string (read-only), 
 	i: 	Index position in the string, 
  	number: To fetch the number from input string in integer format (called by reference)
Return value:
	Returns the position in the string where it lastly found a digit
*/
int fetchNumberFromString(const char* str, int i, int* number){	
	while(str[i]&&isdigit(str[i++])){			// Check whether each character is a digit or not
		*number = ((*number)*10) + str[i-1]-'0';	// Actual number (single digit or multiple digits) is being calculated in integer format, from the character formats
	}							
	return i;
}

int add(const char *str){
	int i=0, s=0, sum = 0;
	bool neg = isNegative(str);
	if (neg==false)
		while(str[i]){
			i = fetchNumberFromString(str, i, &s);
			sum = sum + sumOfDigits(s);
			s=0;
		}
	return sum;
}
