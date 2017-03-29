#include <cs50.h>
#include <stdio.h>

int main(void) {
  printf("Hello, please enter your name: \n");
  string name = get_string();
  printf("Hello %s \n", name);
}
