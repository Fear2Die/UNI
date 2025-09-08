#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int n;
    int res = 1;
    printf("Quelle valeur de n pour factorielle ?\n");
    scanf("%d",&n);
    for(int i = 1; i <=n; i++)
    {
        res *=i; 
    }
    printf("Le factorielle est %d\n",res);
    return 0;
}