#include <cs50.h>
#include <stdio.h>

int main(void) {
  printf("The size of a bool is %lu bytes in memory\n", sizeof(bool));
  printf("The size of a char is %lu bytes in memory\n", sizeof(char));
  printf("The size of a double is %lu bytes in memory\n", sizeof(double));
  printf("The size of a float is %lu bytes in memory\n", sizeof(float));
  printf("The size of a int is %lu bytes in memory\n", sizeof(int));
  printf("The size of a long long is %lu bytes in memory\n", sizeof(long long));
  printf("The size of a string is %lu\n bytes in memory", sizeof(string));
}
