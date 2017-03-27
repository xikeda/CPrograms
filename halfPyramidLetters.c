#include <stdio.h>
int main() {
  int i, j, rows;
  char input, alphabet = 'A';

  printf("Please enter the uppercase letter you want to appear in the last row ");
  scanf("%c", &input);

  for(int i =1; i <= (input - 'A'+1); ++i){
    for(j=1; j <= i; ++j){
      printf("%c ", alphabet);
    }
    ++alphabet;
    printf("\n");
  }
  return 0;
}
