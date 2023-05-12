#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //ASK FOR USER NAME
    string name = get_string("What's your name?: ");
    //PRINT USER NAME
    printf("Hello, %s!\n", name);
}
