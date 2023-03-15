//HOMEWORK PROBLEM--7::

#include<stdio.h>
    int palin(int n)
{     

    int r,sum=0,temp;
    temp=n;

    while(n>0)    
    {    
    r=n%10;    
    sum=(sum*10)+r;    
    n=n/10;    
    }    
    if(temp==sum)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}
int main()
{
    int x;
    printf("Enter a Natural number\n");
    scanf("%d",&x);
       
    while (!palin(x))
    {
        x=x+1;
    }
    
    printf("%d",x);    
  
    return 0;
}