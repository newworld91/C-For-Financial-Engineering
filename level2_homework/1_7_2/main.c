#include <stdio.h>

#define MAXLINE 30

int Length(char str[])
{
    int count = 0;
    while( (str[count] != '\0')  )
    {
        count ++;
    }
    return count-1;
}

int main()
{
    char string[MAXLINE+1];  // Line of maxium 30 chars + \0
    int c;                   // The input character
    int i=0;                 // The counter
    // Print intro text
    printf("Type up to %d chars. Exit with ^Z\n", MAXLINE);
    // Get the characters
    while ((c=getchar())!=EOF && i<MAXLINE)
    {
        string[i++] = (char) c;
    }// String must be closed with \0
        string[i] = '\0';
    printf("String length is %d\n", Length(string));
    return 0;
}
