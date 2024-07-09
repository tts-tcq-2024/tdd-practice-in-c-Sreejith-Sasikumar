#include <ctype.h>

int sumOfDigits(int s){
	int sum = 0;
	if (s<=1000){
		while(s){
			sum = sum + (s%10);
			s/=10;
		}
	}
	printf("sumOfDigits result: %d\n", sum); // Debug statement
	return sum;
}

int add(const char *str){
	int i=0, s=0, sum = 0;
	while(str[i]){
		while(isdigit(str[i++])){
			s = (s*10) + str[i-1]-'0';
		}
		printf("s before sumOfDigits: %d\n", s); // Debug statement
		sum = sum + sumOfDigits(s);
		printf("sum after sumOfDigits: %d\n", sum); // Debug statement
		s=0;
	}
	return sum;
}
