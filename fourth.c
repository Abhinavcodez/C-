//WAP TO FIND WHETHER THE NUMBER IS AMONGSTRON OR NOT::--
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a find whether the number is amongstron or not\n");
    scanf("%d",&n);
    int a,sum;
    sum=0;
    int og=n;

    while (n>0)
    {
        a=n%10;
        sum=sum+(a*a*a);
        n=n/10;
    }
    if (sum==og)
    {
        printf("NUMBER IS ARMSTRONG\n",sum);
    }
    else
    {
        printf("NUMBER IS NOT ARMSTRONG\n",sum);
    }

    return 0;
}