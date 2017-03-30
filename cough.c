#include <cs50.h>
#include <stdio.h>

void cough(void);

int main(void){
  cough(3);
}

void cough(int n){
  for(int i = 0; i < n; i++){
  printf("Cough\n");
}
}
