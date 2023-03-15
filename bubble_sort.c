/*Bubble_Short*/
#include<stdio.h>
#define array_size sizeof(arr)/sizeof(arr[0])

void bubble_sort(int arr[],int n)
{
    int i,max;
    if (n==1)
    {
        return;
    }
    
    for (i=0; i<n-1; i++)
    {
        if (arr[1+i]<arr[i])
        {
            max=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=max;
        }  
    }
    bubble_sort(arr,n-1);
}

int main()
{
    int n;
    printf("ARRAY SIZE?\n");
    scanf("%d",&n);
    int arr[n];
    for (int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    bubble_sort(arr,n);
    printf("The Shorted Array ::-- \n");
    
    for (int i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}