#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int main()
{
    //count letters digit and symbols
    char input[100];
    int i,a=0,d=0,s=0;
    printf("Enter a string : \n");
    scanf("%[^\n]s",input);
    for(i=0;input[i]!='\0'; i++)
    {
        if(isalpha(input[i]))
        a++;
        if(isdigit(input[i]))
        d++;
        else
        s++;
    }
    printf("No. of Alphabets in the given string are : %d\n",a);
    printf("No. of digit in the given string are : %d\n",d);
    printf("No. of symbol in the given string are : %d",s);
  


}