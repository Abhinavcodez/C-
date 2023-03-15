//Assignment-4 ARRAY PROBLEM::--

#include<stdio.h>
#include<math.h>
int main()
{
    int n,i=0,x,digits=0,sum=0;
    printf("Enter Number of fruits choice Shaun have\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter Fruits Quality\n");
    
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0; i<n; i++)
    {
        x=arr[i]&arr[i+1];
    }
    int temp=x;
    while (temp>0)
    {
        digits=temp%10; 
        sum=sum+pow(2,i)*digits;
        i++;
        temp=temp/10;
    }
    
    printf("The maximum satisfactionn of the shaun is %d",sum);
    return 0;
}