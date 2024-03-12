#include <stdio.h>
// function is block of code that perform particular task
// take argument -- do work -- return result
// it can be used multiple time 
// increses code reusability
void show(); // function declaration / prototype
void show() // function defination
{
    printf("Hello World!!");
}

int main()
{
    show(); // function call
    printf("\n");
    for(int i=0;i<10;i++)
    {
        show();
        printf("\n");
    }
    return 0;
}

