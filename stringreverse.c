#include<stdio.h>
#include<string.h>

int main()
{
    char str1[100];
    int len,i;
    scanf( "%s", str1 );
    len = strlen(str1);
    for(i = len - 1; i >= 0; i--) {
        printf("%c", str1[i]);
    }
    return 0;
}