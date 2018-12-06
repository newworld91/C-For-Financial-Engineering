//
// Created by Steve on 8/8/18.
//

#include "level1.4.hpp"
#include <stdio.h>
#include <stdlib.h>

void exercise1_4_1()
{
    char c;
    int word = 0;
    int line = 0;
    int characters = 0;

    while ((c = getchar()) != EOF)
    {
        if ((c != ' ') && (c != '\n')) {
            characters++;
        }
        if ((c == ' ') || (c == '\n')) {
            word++;
        }
        if (c == '\n') {
            line++;
        }
        printf("Characters = %d Words = %d Lines = %d\n", characters, word, line);
    }


}


void exercise1_4_2() {
    char c;
    int wordnumber = 0;
    int linenumber = 0;
    int charactnumber = 0;

    do {
            if ((c != ' ') && (c != '\n'))
            {
                charactnumber++;
            }

            if ((c == ' ') || (c == '\n'))
            {
                wordnumber++;
            }
            if (c == '\n')
            {
                linenumber++;
            }
            printf("Characters = %d Words = %d Lines = %d\n", charactnumber-1, wordnumber, linenumber);

        }
    while ((c=getchar()) != EOF);
}

void exercise1_4_3() {
    char c;
    int wordnumber = 0;
    int linenumber = 0;
    int charactnumber = 1;
    while((c=getchar())!=EOF) {
        switch (c) {
            case '\n':
                linenumber++;
                printf("Line Number = %d\n", linenumber);
                break;

            case ' ':
                wordnumber++;
                printf("word number = %d\n", wordnumber);
                break;


            default:
                ++charactnumber;
                printf("Characters = %d\n", charactnumber);
                break;
        }
    }
}


int exercise1_4_4()
{
    float celsius;
    float farenheit;
    int upper;

    upper = 300;

    printf("Celsius to Farenheit Conversion");
    while(farenheit <= upper)
    {
        celsius = (5.0/9.0) * farenheit - 32.0;
        printf("Celsius is equal to %10.1f  when Farenheit is %10.1f\n", celsius, farenheit);
        farenheit += 20;
    }
    return 0;

}

int exercise1_4_5()
{
    float celsius;
    int upper;

    upper = 19;

    printf("Celsius to Farenheit Conversion\n");
    for(float farenheit = 0; farenheit <= upper;)
    {
        celsius = (5.0/9.0) * farenheit - 32.0;
        printf("Celsius is equal to %10.1f  when Farenheit is %10.1f\n", celsius, farenheit);
        farenheit = farenheit +  1;
    }
    return 0;
}

int main()
{

    return 0; /// enter functions here

}