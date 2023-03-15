#include<stdio.h>
/*finding smallest element in array*/
/*shifting at begnning*/

#define array_size sizeof(arr)/sizeof(arr[0])
void pos(int arr[],int n)
{
    int i,j,min_idx;
    
    for (i=0; i<n-1; i++) 
    {
        min_idx = i;
        for (j=i+1; j<n; j++) 
        {
            if (arr[j] < arr[min_idx])
            min_idx = j;
        }
        
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}
void selectionprint(int arr[],int n)
{
    int i;
    pos(arr,n);
    for (i=0; i<n; i++)
    {
       printf("%d ",arr[i]);       
    }
}
int main()
{
    int n;
    printf("ARRAY SIZE?\n");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i <n; i++)
    {
        scanf("%d",&arr[i]);
    }
    selectionprint(arr,n);
    return 0;
}