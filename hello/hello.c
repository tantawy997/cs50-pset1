#include <cs50.h>
#include  <stdio.h>

// this line of code asks the user for their name and then responds with hello, name

int main(void)

{
    string name = get_string("what is your name? \n");

    printf("hello, %s \n", name);


}