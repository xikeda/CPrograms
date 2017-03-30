#include <cs50.h>
#include <stdio.h>

void say(string s, int n);

int main(void){
  say("Cough", 3);
}

void say(string s, int n){
    for(int i = 0; i < n; i++){
    printf("%s\n", s);
  }
}
