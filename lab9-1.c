
//9.1.WAP TO FIND SUM OF DIGITS OF A NUMBER USING RECURSION

#include<stdio.h>

int sumdigits(int number)

{
    if(number>0)
    return number%10+ sumdigits(number/10);
    else
    return 0;
}

int main()
{
    int number,x;
    printf("YOUR NUMBER?\n");
    scanf("%d",&number);

    x=sumdigits(number);
    printf("%d",x);

    return 0;
}