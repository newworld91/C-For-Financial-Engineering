//
// Created by Steve on 8/11/18.
//

#include "freq.h"

#include <stdio.h>

freq() {
    int c;
    int num_0 = 0;
    int num_1 = 0;
    int num_2 = 0;
    int num_3 = 0;
    int num_4 = 0;
    int other = 0;
    printf("Input something\n");

    while ((c = getchar()) != EOF) {
        switch (c) {
            case '0':
                num_0++;
                printf("0 was typed: %d\n", num_0);
                break;

            case '1':
                num_1++;
                printf("1 was typed: %d\n", num_1);
                break;
            case '2':
                num_2++;
                printf("2 was typed: %d\n", num_2);
                break;
            case '3':
                num_3++;
                printf("3 was typed: %d\n", num_3);
                break;
            case '4':
                num_4++;
                printf("4 was typed %d\n", num_4);
                break;
            default:
                other++;
                printf("All other characters typed %d\n", other);
                break;
        };

    }
}

freq2(){
    int c;
    int num_0 = 0;
    int num_1 = 0;
    int num_2 = 0;
    int num_3 = 0;
    int num_4 = 0;
    printf("Input something\n");

    while ((c = getchar()) != EOF) {
        switch (c) {
            case '0':
            num_0++;
            printf("0 was typed: %d\n", num_0);
            if(num_0 == 1)
            {
                printf("Zero was typed one time\n");
            }
            if(num_0 == 2)
            {
                printf("Zero was typed two times\n");
            }
            if(num_0 == 3)
            {
                printf("Zero was typed three times\n");
            }
            if(num_0 == 4)
            {
                printf("Zero was typed four times\n");
            }
            if(num_0 > 4)
            {
                printf("Zero was typed more than four times\n");
            }
            break;
        case '1':
            num_1++;
            printf("1 was typed: %d\n", num_1);
            if(num_1 == 1)
            {
                printf("One was typed one time\n");
            }
            if(num_1 == 2)
            {
                printf("One was typed two times\n");
            }
            if(num_1 == 3)
            {
                printf("One was typed three times\n");
            }
            if(num_1 == 4)
            {
                printf("One was typed four times\n");
            }
            if(num_1 > 4)
            {
                printf("One was typed more than four times\n");
            }
            break;

        case '2':
        num_2++;
        printf("2 was typed: %d\n", num_2);
            if(num_2 == 1)
            {
                printf("Two was typed one time\n");
            }
            if(num_2 == 2)
            {
                printf("Two was typed two times\n");
            }
            if(num_2 == 3)
            {
                printf("Two was typed three times\n");
            }
            if(num_2 == 4)
            {
                printf("Two was typed four times\n");
            }
            if(num_2 > 4)
            {
                printf("Two was typed more than four times\n");
            }
            break;

        case '3':
            num_3++;
            printf("3 was typed: %d\n", num_3);
            if(num_3 == 1)
            {
                printf("Three was typed one time\n");
            }
            if(num_3 == 2)
            {
            printf("Three was typed two times\n");
            }
            if(num_3 == 3)
            {
            printf("Three was typed three times\n");
            }
            if(num_3 == 4)
            {
            printf("Three was typed four times\n");
            }
            if(num_3 > 4)
            {
            printf("Three was typed more than four times\n");
            }
            break;

        case '4':
        num_4++;
        printf("4 was typed %d\n", num_4);
            if(num_4 == 1)
            {
            printf("Four was typed one time\n");
            }
            if(num_4 == 2)
            {
            printf("Four was typed two times\n");
            }
            if(num_4 == 3)
            {
            printf("Four was typed three times\n");
            }
            if(num_4 == 4)
            {
            printf("Four was typed four times\n");
            }
            if(num_4 > 4)
            {
            printf("Four was typed more than four times\n");
            }
            break;
        default:
            break;
        };

    }
    return 0;
}
