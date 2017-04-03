/*
  Problem Set 1
  Brandon Ikeda
  CS 50 EDX 2017
  Harvard University
  April 2nd 2017
*/

#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void){

  //Declare Variables
    float change;
    float counter = 0;
    float quarter = 25.0;
    float dime = 10.0;
    float nickel = 5.0;
    float penny = 1.0;

  //Get input & Validate
    do{
    printf("hai! How much change is owed? \n");
    change = get_float();
    }while(change < 0);

  //Convert from dollars to cents
    change = round(change * 100);

  //Execute
    while((change / quarter) != 0){
        printf("Change: %.2f\n", change);
        change = change - quarter;
        counter++;
        printf("Div by quarter!\n");
        if(quarter > change){
            break;
        }
    }
    while((change / dime) != 0){
        printf("Div by dime! \n");
        change = change - dime;
        counter++;
         if(dime > change){
            break;
        }
    }
    while((change / nickel) != 0){
        printf("Div by nickel! \n");
        change = change - nickel;
        counter++;
         if(nickel > change){
            break;
        }
    }
    while((change / penny) != 0){
        printf("Div by penny! \n");
        change = change - penny;
        counter++;
         if(penny > change){
            break;
        }
    }
    printf("%.f\n", counter);

    //Return
    return 0;
}
