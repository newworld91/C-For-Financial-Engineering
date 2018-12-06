#include <stdio.h>



void DayName()
{
    char daysnum[7] = {1,2,3,4,5,6,7};
    char c;

    printf("Select a Number 1-7!\n");

    while ((c=getchar())!= EOF)
    {
        switch(c)
        {
            case '1':
                printf("Day %d = Sunday\n", daysnum[6]);
                break;
            case '2':
                printf("Day %d = Monday\n", daysnum[0]);
                break;
            case '3':
                printf("Day %d = Tuesday\n", daysnum[1]);
                break;
            case '4':
                printf("Day %d = Wednesday\n", daysnum[2]);
                break;
            case '5':
                printf("Day %d = Thursday\n", daysnum[3]);
                break;
            case '6':
                printf("Day %d = Friday\n", daysnum[4]);
                break;
            case '7':
                printf("Day %d = Saturday\n", daysnum[5]);
                break;

            default:
                printf("Choose another number from 1-7\n");
                break;
        }
        break;
    }
}

int main()
{
    DayName();
}