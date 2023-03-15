#include<stdio.h>
#define array_size sizeof(arr[n])/sizeof(arr[0])

int min_idx(int arr[],int i,int j)
{
    if (i==j)
    {
        return i;
    }
    int k= min_idx(arr,i+1,j);
    return (arr[i]<arr[k])? i : k;
}
int swap(int x,int y)
{
    int temp=x;
    x=y;
    y=temp;
}
void recurSelectionSort(int arr[],int n,int index)
{
    index=0;
    if (index == n)
       return;
 
    int k = min_idx(arr, index, n-1);
 
    if (k != index)
       swap(arr[k], arr[index]);
 
    recurSelectionSort(arr, n, index + 1);
}
int main()
{
    int n,i;
    printf("Array Size?\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter Array Elements\t");
    for (i = 0; i <n; i++)
    {
        scanf("%d",&arr[i]);
    }
    recurSelectionSort(arr,n,i);
    printf("\nThe Sorted Array\n");
    for (i = 0; i <n; i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}