#include<stdio.h>
int iscoprime(int a, int b)
{

int i,count=0,t;
t=iscoprime;

for(i =2;i<=t;i++)
{
   if (t%i==0)
   {
    i++;
   }
   else
   {
     count++;
   }
   if (count==0)
   {
    return 1;
   }
   else
   {
    return 0;
   }
   
}
 return 0;
}
int main()
{
    iscoprime
    return 0;
}