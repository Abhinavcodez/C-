//WAP TO REVERSE A ARRAY OR STRING::--

#include<stdio.h>

int main()
{
    int n;
    printf("Enter Number of elements you want in your array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter Your Array\t");
    for (int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nThe Entered Array:\t");
    for (int i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }    
    printf("\nThe Reversed Array:\t");
    for (int i=n-1; i>=0; i--)
    {
        printf("%d  ",arr[i]);
    }
    
    return 0;
}