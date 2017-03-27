
#include <stdio.h>
int main() {
  int i, space, rows, k = 0;

  printf("Please enter the number of rows you wish to have: ");
  scanf("%d", &rows);

  for(i = rows; i >= 1; --i, k=0){
    for(space =1; space <= rows-i; ++space){
      printf(" ");
    }
    while(k != 2*i-1){
      printf("*");
      ++k;
    }
    printf("\n");
  }
  return 0;
}
