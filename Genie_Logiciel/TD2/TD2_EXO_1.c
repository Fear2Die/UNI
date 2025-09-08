#include <stdlib.h>
#include <stdio.h>

int main()
{
    char M = 77;
    char un = 49;
    char I = 73;
    char quatre = 52;
    char point = 46;
    char zero = 48;
    int guess; 
    printf("%c%c %c%c%c%c\n",M,un,I,quatre,point,zero);
    printf("Is it upper or lower case? Enter the number and find out\n");
    scanf("%c",&guess);
    if(64<guess<91)
        printf("Uppercase\n");
    else if(96<guess<123)
        printf("Lowercase\n");
    else
        printf("Input Error\n");
    return 0;
}