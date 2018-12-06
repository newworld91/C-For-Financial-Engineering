//
// Created by Steve on 8/12/18.
//

#include "Print.h"
#include <stdio.h>

int print(int i)
{
    i *= 2;
    printf("i * 2 = %d\n", i);
}

int printname(int x)
{

    if (x != 0)
    {
        putchar('0' + x % 10);
        return printname(x/10);
    }
}