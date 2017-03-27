#include <stdio.h>

int main(){
  int n, i, c, a =1;

  printf("Please enter the number of rows for Floyd's Triangle to Print: ");
  scanf("%d", &n);


  for(i = 1; i <= n; i++){
    for(c = 1; c <= i; c++){
      printf("%d ", a);
      a++;
    }
    printf("\n");
  }
  return 0;
}
