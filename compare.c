#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int main()
{
    char S1[100];
    printf("Enter first string : ");
    scanf("%s",S1);
    printf("Enter second string : ");
    char S2[100];
    scanf("%s",S2);

    if (strcmp(S1,S2)>0)
    {
        printf("String 1 is greater than String 2 ");
    }
    else if(strcmp(S1,S2)<0)
    {
        printf("String 1 is lesser than string 2 ");
    }
    else if(strcmp(S1,S2)==0)
    {
        printf("Both the strings are of same lenght ");
    }
    getch();
}