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
  
    printf("Input temperature in Celsius: ");
    scanf("%lf", &C);
    F = (C * 9 / 5 + 32 );
    printf("Temperature in Fahrenheit is %0.2f degree\n", F);

  } else if(temp == 2) {
    // covert from Fahrenheit to Celsius

    printf("Input temperature in Fahrenheit: ");
    scanf("%lf", &F);
    C = (F-32) * 5 / 9;
    printf("Temperature in Celsius is %0.2f degree centigrad\n", C);

  } else {
    // user have pressed something other than 1 or 2 !!
    printf("Please input either 1 or 2. Thank you.\n\n");
  }

  return 0;
}

