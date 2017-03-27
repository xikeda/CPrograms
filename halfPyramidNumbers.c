#include <stdio.h>
int main() {
  int i, j, rows;

  printf("Please enter the number of rows you wish to have: ");
  scanf("%d", &rows);

  for(int i =1; i <= rows; ++i){
    for(j=1; j <= i; ++j){
      printf("%d ", j);
    }
    printf("\n");
  }
  return 0;
}
