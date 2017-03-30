#include <cs50.h>
#include <stdio.h>

int main(void){
  char c = get_char();

  if(c == 'y' || 'Y'){
    printf("Yes\n");
  }
  else if(c == 'n' || 'N'){
    printf("No\n");
  }
  else{
    printf("Error");
  }
}
