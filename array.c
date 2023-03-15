#include<stdio.h>
int main()
{
    char a[100];
    scanf("%c",&a[100]);

    for (int i =1; i <=100; i++)
    {
        printf("%c",a[i]);

    if (EOF==1 || i==100)
    {
       break;   
    }
    else
    {
        for(i=100; i>=1; i--)
    {   
        printf("%c",a[i]);
    }

    }
    
    }
    return 0;
}
