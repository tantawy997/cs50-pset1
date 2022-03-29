#include <cs50.h>
#include <stdio.h>
#include <math.h>

// the main function the return how much change we would give the user
int main(void)


{
    // daclaring a variable which is the one that we asking the user to tell us
    float dollar;
    do
        // get the the variable from user
    {
        dollar = get_float("change set:%f\n ");
    }
    

    /* while dollar given from user should never be under 0 if so we should re-promt the user again,
    after that we convert dollars to cents and we round it up */

    while (dollar < 0);

    {
        int cents = round(dollar * 100);
        int coins = 0;

        {
            // while cents more than 25 we should give the user from that category
            while (cents >= 25)

            {
                cents = cents - 25;
                coins++;
            }
            //while cents more than 10 we should give the user from that category

            while (cents >= 10)

            {
                cents = cents - 10;
                coins++;
            }
            // while cents more than 5 we should give user from that category

            while (cents >= 5)
            {
                cents = cents - 5;
                coins++;
            }
            // while cents more than 1 but less than 5 we should give the user from that change
            while (cents >= 1)
            {
                cents = cents - 1;
                coins++;
            }

            printf("you will need %i coins \n", coins);


        }
    }
}