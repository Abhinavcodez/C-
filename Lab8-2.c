//WAP TO FIND MAX AND MIN OF A ARRAY OR STRING::--

#include <stdio.h>

#define ARRAY_SIZE(arr)  sizeof(arr)/sizeof(arr[0])

void findMinimumMaximum(int arr[], int N)
{
    int i;

    int min = arr[0], max = arr[0];

    for (i = 0; i < N; i++)
    {

        if (arr[i] < min)
        {
            min = arr[i];
        }
        if(max< arr[i])
        {
            max = arr[i];
        }
    }

    printf("minimum element is %d", min);
    printf("\n");
    printf("maximum element is %d", max);
}
int main()
{
    int n;
    printf("Enter Size of your array\n");
    scanf("%d",&n);

    int arr[n];
    
    printf("Enter elements of your array\t");

    for(int i = 0; i <n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    
    int N =ARRAY_SIZE(arr);
    
    findMinimumMaximum(arr, N);
    return 0;
}