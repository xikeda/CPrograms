#include <cs50.h>
#include <stdio.h>

int main(void){
  char c = get_char();

  switch(c) {
    case 'y':
    case 'Y':
      printf("Yes\n");
      break;

    case 'N':
    case 'n':
      printf("No\n");
      break;

    default:
      printf("Error\n");
      break;
  }
}
