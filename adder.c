#include <cs50.h>
#include <stdio.h>

int main(void) {
  printf("Hello, please enter the first number you want to add: \n");
  int x = get_int();

  printf("Hello, please enter the second number you want to add: \n");
  int y = get_int();

  printf("Hello, the sum of the two numbers you entered is: %i \n", x + y);
}
