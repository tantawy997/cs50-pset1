#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int start_size;
    do

    {
        start_size = get_int("start_size: ");

    }
    while (start_size < 9);

    // TODO: Prompt for end size
    int end_size;
    do
    {
        end_size = get_int("end_size: ");

    }
    while (end_size < start_size);

    // TODO: Calculate number of years until we reach threshold

    int Years = 0;

    while (end_size > start_size)
    {

        start_size = start_size + (start_size / 3) - (start_size / 4);
        Years++;

    }


    // TODO: Print number of years
    printf("Years: %i \n", Years);
}

