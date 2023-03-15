#include<stdio.h>
int main()
{
    char a='*';
    int n;
    scanf("%d",&n);
    float i;

    for(float j=1; j<=n; ++j)
    {
        for( i=1; i<=j; ++i)
        {
            printf("%c ",a);
        }
           printf("\n");     
    }
    
    return 0;
}