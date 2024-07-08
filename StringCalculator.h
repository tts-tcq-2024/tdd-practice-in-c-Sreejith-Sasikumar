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
}

#endif // STRINGCALCULATOR_H
