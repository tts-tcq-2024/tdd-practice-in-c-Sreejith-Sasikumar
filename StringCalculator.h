#include <ctype.h>

int isNegative(const char* str){
	int ret = 0, i = 0;
	while(str[i]){
		if(str[i] == '-'){
			printf("Negatives not allowed\n");
			ret = 1;
		}
		i++;
	}
	return ret;
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

int fetchNumber(const char* str, int i, int* s){
	while(str[i]&&isdigit(str[i++])){
		*s = ((*s)*10) + str[i-1]-'0';
	}
	return i;
}

int add(const char *str){
	int i=0, s=0, sum = 0;
	if (isNegative(str) == 0)
		while(str[i]){
			i = fetchNumber(str, i, &s);
			sum = sum + sumOfDigits(s);
			s=0;
		}
	return sum;
}
