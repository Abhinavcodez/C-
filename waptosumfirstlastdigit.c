#include<stdio.h>

int main()
{
    
int n,firstdigit,lastdigit;
int sum=0;
printf("Enter a number\n");
scanf("%d", &n);

lastdigit =n%10;

while (n>=10)
{
     n=n/10;
}

sum=n+lastdigit;

printf("The sum of first and last digits of the number is:%d",sum);

    return 0;
}