//
// Created by Steve on 8/22/18.
//
#include <stdio.h>

int main()
{
    int c;
    printf("Type in a here: \n");

    while((c=getchar()) != EOF)
    {
        if(c != 1)
        {
            putchar(c);
        }
        else
        {
            printf("CTRL + A was hit and Safely Shut Down");
            break;
        }
    }

    return 0;
}