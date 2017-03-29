  #include <cs50.h>
  #include <stdio.h>

  int main(void) {
    printf("Hello, please enter a number: \n");
    int x = get_int();

    printf("Hello, please enter a number: \n");
    int y = get_int();

    printf("Hello, the sum of %i and %i is: %i \n", x, y, x + y);
    printf("Hello, the difference of %i and %i is: %i \n", x, y, x - y);
    printf("Hello, the product of %i and %i is: %i \n", x, y, x * y);
    printf("Hello, the quotient of %i and %i is: %i \n", x, y, x / y);
    printf("Hello, the remainder of %i divied by %i is: %i \n", x, y, x % y);
  }
