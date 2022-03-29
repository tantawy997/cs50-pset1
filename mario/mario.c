#include <cs50.h>
#include <stdio.h>

// this is the main function to printing half of the hashes pyramid
int main(void)


{
    // first declaring tybe of variable height which integer
    int height;

    // get a number between 8 and 1 from the user and then checking if that number is betweem those numbers

    do
    {

        height = get_int("height: ");
    }
    while (1 > height || height > 8);

    // a for loop to genrate rows and a loop to genrate columns

    for (int i = 0; i < height; i++)

    {

        for (int j = 0; j < height; j++)

        {
            // if condition to check if i + j > height -1 to print a space in the line otherwise print hash
            if (i + j < height - 1)

            {

                printf(" ");
            }

            else
            {
                printf("#");
            }


        }

        printf("\n");

    }

}

