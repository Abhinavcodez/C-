//WAP to find all the prime factors of a number::--

#include<stdio.h>
int main()
{
    int i,number;                //Input of nuumber
    printf("Enter a Number\n");
    scanf("%d",&number);

    for(i=2; i<=number; i++)    //Cheking for prime factors
    {
    while(number%i==0)
    {   
        printf("%d",i);      //Printing the prime factors
        
        if (i!=number)
        {
            printf("*");
        } 
        number=number/i;
    }
    }        
    return 0;
}