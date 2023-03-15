//SUM OF DIGITS USING FOR LOOP::--
#include<stdio.h>
#include<math.h>
int main()
{
    int n,r,sum=0;
    printf("Enter a Number\n");

    for (scanf("%d",&n); n!=0; n=n/10)
    {
       r=n%10; //Reminder
       sum=sum+r; //sum of digits    
    }
    printf("%d",sum);

    return 0;
}