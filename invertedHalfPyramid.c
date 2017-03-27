#include <stdio.h>
int main() {
  int i, j, rows;

  printf("Please enter the number of rows you wish to have: ");
  scanf("%d", &rows);

  for(i = rows; i >= 1; --i){
    for(j=1; j <= i; ++j){
      printf("* ");
    }
    printf("\n");
  }
  return 0;
}
