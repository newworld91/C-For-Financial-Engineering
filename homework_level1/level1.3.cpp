//
// Created by Steve on 8/8/18.
//

#include "level1.3.hpp"

#include <stdio.h>

void exercise1_3_1()
{
    printf("Hello World!\n");
}

void exercise1_3_2(int base, int height)
{
    int result;
    result = 0.5 * base * height;
    printf("The area of the triangle is %d\n", result);
}

void exercise1_3_3()
{
    signed int x;

    x=-3+4*5-6;
    printf("x=%d\n", x);

    /// "x=11"

    x=3+4%5-6;
    printf("x=%d\n", x);

    /// "x=1"

    x=-3*4%-6/5;
    printf("x=%d\n", x);

    /// "x=0"

    x=(7+6)%5/2;
    printf("x=%d\n", x);

    /// "x=1"
}

void exercise1_3_4(int married)
{
    /// Where 1 is true and 0 is false
    printf("Are you Married %d\n?", (married == 0) ? false : true);
}

void exercise1_3_5()
{
    /// n-- will start at 10 and complete at 1 (the value will be returned, then incremented)
    /// --n will start at 9 and complete at 0 (the value will be incremented, then is returned)
    for(int n=10; n>0;)
    {
        printf("When using n--, then n equals %d\n", n--);
    }
    for(int n=10; n>0;)
    {
        printf("When using --n, then n equals %d\n",--n);
    }
}



void exercise1_3_6(int x)
{
    printf("x=%d\n",x);

    x = x >> 1;

    printf("x >> 1 evaluates to: %d\n",x);

    if (x < 0)
    {
        printf("Negative, a 1 was inserted left \n");
    }
    else
    {
        printf("Positive, a 0 was inserted left \n");
    }
}

void exercise1_3_7()
{
    int x = 2;
    printf("x = %d\n",x);
    printf("x<<1 = %d\n", x << 1); /// equivalent of 2^2
    printf("x<<2 = %d\n", x << 2); /// equivalent of 2^3
    printf("x<<3 = %d\n", x << 3); /// equivalent of 2^4
}

void exercise1_3_8()
{
    int x=2;
    int y; int z;
    x*=3+2;
    printf("x=%d\n", x);
    /// x = 10

    x*=y=z=4;
    printf("x=%d\n", x);
    /// x=40

    x=y==z;
    printf("x=%d\n", x);
    /// x=1, because 1 = True
}

void exercise1_3_9()
{
    int x = 1;
    int y = 1;
    int z = 1;
    x += y += x;
    printf("%d\n\n", (x < y) ? y : x);
    /// return 3
    printf("%d\n", (x < y) ? x++ : y++);
    printf("%d\n", x);

    /// return 3, x++ did not evaluate because the previous example was false, therefore it remains the same
    printf("%d\n", y);
    /// return 3 because y++
}


int main()
{

return 0; /// enter functions here

}