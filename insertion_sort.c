/*Insertion Sort*/

#include<stdio.h>
#define array_size sizeof(arr[n])/sizeof(arr[0])

void insertionsort(int arr[], int n)
{
    int i,j,key;

    for ( i=1; i<=n; i++)
    {
        key=arr[i];
        j=i-1;

        while (j>=0 && arr[j]>key)
        {
           arr[j+1]=arr[j];
           j=j-1; 
        }
        arr[j+1]=key;
    }
}
void printarray(int arr[], int n)
{
    int i=0;
    for (i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
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
    insertionsort(arr,n);
    printarray(arr,n);
    return 0;
}