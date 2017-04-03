#include <cs50.h>
#include <stdio.h>

int main(void) {
    //Declare variables
    long long number;
    int x = 1;
    int y = 1;
    string card = " ";

        //Get input, validate
        do{
        printf("Number: ");
        number = get_long_long();
        }while(number < 1000000000000 || number > 10000000000000000);

        /*
        Luhn’s algorithm
        Multiply every other digit by 2, starting with the number’s second-to-last digit, and then add those products' digits together.
        Add the sum to the sum of the digits that weren’t multiplied by 2.If the total’s last digit is 0 (or, put more formally,
        if the total modulo 10 is congruent to 0), the number is valid!
        */

            //Determine card
            if(){
                printf("VISA\n");
            }
            else if(){
                printf("MASTERCARD\n");
            }
            else if(){
                printf("AMEX\n");
            }
            else{
                printf("INVALID");
            }
    //Return
    return 0;
}
