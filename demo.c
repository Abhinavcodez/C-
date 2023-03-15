/* Binary search involves partitioning the array into two parts around a pivot. Ternary search 
has two pivots and splits the array into three parts. Write the pseudo code for the ternary 
search algorithm*/
#include <stdio.h>
#include <string.h>
#define array_size sizeof(arr[n])/sizeof(arr[0])
 
int sort (int arr[],int search,int i,int l)
{
    int j,k;
	int n=array_size;
    i=arr[0];
	j=(n)/3;
	k=2*(n)/3;
	l=arr[n-1];
	if (arr[j]>search)
	{
        i=j+1;
	}
	else if (arr[j]<search && arr[k]>search)
	{
        l=k-1;	
		i=j+1;
	}
	else if (arr[k]<search && arr[l]>search)
	{
        i=k+1;		
	}
	else if (search==arr[j])
	{
		return j;
	}
	else if (search==arr[k])
	{
		return k;
	}	
} 
int main()
{
	int n,search,i,l;
	printf("Enter Your Array Size\n");
	scanf("%d",&n);
    int arr[n]; 	
  	l=array_size;
	i=arr[0];

	for (int i=0; i<n; i++)
	{
		scanf("%d",&arr[i]);
	}

	printf("Enter a Key to search\n");
	scanf("%d",&search);
    int p=sort(arr, search, i, l);

	printf("Index of %d is %d\n", search, p);
	sort(arr,search,i,l);

    return 0;
}