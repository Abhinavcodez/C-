//WAP TO FIND SUM OF DIGITS OF NUMBER::--
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number to find its sum of digits\n");
    scanf("%d",&n);
    int a,sum;
    sum=0;
    while (n>0)
    {
        a=n%10;
        sum=sum+a;
        n=n/10;
    }
    printf("RESULT:: %d \n",sum);

    return 0;
}