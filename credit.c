#include <cs50.h>
#include <stdio.h>

int main(void) {
    //Declare variables
    long long number;
    string card = " ";

    //Get input, validate
    do{
    printf("Number: ");
    number = get_long_long();
    if(number < 1000000000000 || number > 10000000000000000){
        printf("Go fuck yourself\n");
    }
    }while(number < 1000000000000 || number > 10000000000000000);

    //Return
    printf("%s", card);
    return 0;

}
