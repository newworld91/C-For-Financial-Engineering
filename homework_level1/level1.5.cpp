//
// Created by Steve on 8/12/18.
//

#include "level1.5.hpp"
#include<stdio.h>

void minus (int x, int y)
{
    int result;
    result = x - y;
    printf("X - Y = %d\n", result);
}

int factorial(int x)
{
    int result;

    if (x <= 1)
    {
        return 1;
    }
    else
    {
        return x*factorial(x-1);
    }

}

int main()
{

return 0; /// enter functions here

}