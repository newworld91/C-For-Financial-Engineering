#include <stdio.h>


int swap(int* x, int*y) {
    int i = *x;
    int j = *y;
    *x = j;
    *y = i;
    return 0;
}

int main()
{
    int x = 123;
    int y = 456;

    printf("i = %d\n", x);
    printf("j = %d\n", y);

    swap(&x, &y);

    printf("i = %d\nj = %d\n", x, y);

    return 0;
}


              // String must be closed with \0
    // return 0;