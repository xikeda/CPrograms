  #include <cs50.h>
  #include <stdio.h>

  void print_name(string){
    printf("Hello, %s\n", string);
  }

  int main(void) {
    string s = get_string();
    print_name(s);
  }
