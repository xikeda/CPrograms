/*
  Problem Set 1
  Brandon Ikeda
  CS 50 EDX 2017
  Harvard University
  April 2nd 2017
*/

#include <cs50.h>
#include <stdio.h>

int main(void){

  //Declare Variables
    int height;
    int spaces;
    int dashes;

  //Get input, validate
    do
    {
        printf("Height: ");
        height = GetInt();
    }
    while (height <= 0 || height >= 23);

    //Loop for the rows
    for (int i = 1; i <= height; i++){
        //Loop for the spaces and dashes per row
        for (spaces = (height - i); spaces >= 0; spaces--){
            printf(" ");
        }
        for (dashes = 1; dashes <= i; dashes++){
            printf("#");
        }
        //Go to next line
        printf("\n");
    }
    //Return
    return 0;
}
