#include<stdio.h>
//WAP TO CONVERT UNSORTED TO SORTED ARRAY::--
#define arraysize sizeofarr[n]/sizeof(arr[0])

int sort(int arr[], int n)
{
    int i,j,a;

        for (i=0; i<n; i++) 
        {
 
            for (j=i+1; j<n; j++)
            {
 
                if (arr[i]>arr[j]) 
                {
                    a=arr[i];
                    arr[i] = arr[j];
                    arr[j] = a;
                }
            }
        }
        printf("Sorted Array!\n");
        for (i=0; i<n; i++)
        {
        printf("%d\t",arr[i]);
        }
}  
int main()
{
    int n;
    printf("ARRAY! SIZE=? \n");
    scanf("%d",&n);

    int arr[n];
    for (int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    int x=sort(arr, n);

    return 0;
}