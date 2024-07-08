#include <ctype.h>

bool isEmptyString(const char* input){
  if (input == NULL || input[0] == '\0') {
    return 1; // The string is empty
  }
  return 0;
}

int add(const char *input){
  int sum = 0, i=0;
  if (isEmptyString(input)){
    return 0;
  }else{
    while(input[i]){
      if(isdigit(input[i])){
        sum = sum + (input[i] - '0');
      }
      i++;
    }
  }
}
