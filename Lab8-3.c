/*Given an array and a value, find if there is a triplet in array whose sum is equal to the given value. 
If there is such a triplet present in array, then print the triplet and return true.
Else return false.*/

#include<stdio.h>

int main()
{
    int n,sum,i;    
    printf("Enter Size of array\n");
    scanf("%d",&n);
    printf("Enter The Sum\n");
    scanf("%d",&sum);
    int arr[n];
    
    printf("Enter Your Array\n");

    for (int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for (int i=0; i<n-2; i++)
    {
        for (int j=1+i; j<n-1; j++)
        {
            for (int k=1+j; k<n; k++)
            {
                if (sum==arr[i]+arr[j]+arr[k])
                {
                    printf("Triplets are :  %d %d %d\n",arr[i],arr[j],arr[k]);
                }
            }
        }
        
    }   

    return 0;
}