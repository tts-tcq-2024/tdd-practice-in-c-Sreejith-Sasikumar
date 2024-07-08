bool isEmptyString(const char* input){
  if (input == NULL || input[0] == '\0') {
    return TRUE; // The string is empty
  }
  return FALSE;
}

int add(const char *input){
  if (isEmptyString(input)){
    return 0;
  }
}
