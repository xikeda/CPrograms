  #include <cs50.h>
  #include <stdio.h>

  int main(void) {
    int size, row, col, space;
    do{
      printf("Please enter the size of half-pyramid you want to build between 1 and 23: ");
      size = get_int();
    }while(size < 1 || size > 23);

    for(row = 0; row <= size; row++){
      for()
      printf(" ");
      printf("#");
      printf("\n");
    }
  }
