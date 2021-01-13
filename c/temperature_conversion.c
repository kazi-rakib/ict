#include <stdio.h>

int main(){

  double C, F;

  printf("How do you want to convert: \n");
  printf("\t1. From Celsius to Fahrenheit?\n");
  printf("\t2. From Fahrenheit to Celsius?\n");

  int temp;

  scanf("%d", &temp);

  if(temp == 1){
    // convert from Celsius to Fahrenheit

  } else if(temp == 2) {
    // covert frome Fahrenheit to Celsius

  } else {
    // user have pressed something other than 1 or 2 !!
    printf("Please input either 1 or 2. Thank you.\n\n");
  }

  return 0;
}

