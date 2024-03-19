
#include <stdio.h>
#include "./src/Math.c"

int main(int argc, char **argv) {

  int num1;
  int num2;

  printf("Enter a number: \n");
  scanf("%d", &num1);

  printf("Enter another number: \n");
  scanf("%d", &num2);

  int result = sum(num1, num2);
  printf("The sum of %d and %d is %d\n", num1, num2, result);

  printf("The difference of %d and %d is %d\n", num1, num2, sub(num1, num2));

  printf("The product of %d and %d is %d\n", num1, num2, mul(num1, num2));

  printf("The division of %d and %d is %f\n", num1, num2, div(num1, num2));

  return 0;
}


