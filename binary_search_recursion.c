#include <stdio.h>

// Function for binary search using recursion
int binarySearch(int arr[], int low, int high, int key) 
{
    if (low <= high) 
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key) 
        {
            return mid;
        } 
        else if (arr[mid] > key) 
        {
            return binarySearch(arr, low, mid - 1, key);
        } 
        else 
        {
            return binarySearch(arr, mid + 1, high, key);
        }
    }
    return -1;
}

int main() 
{
    int n, key, result;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements in the array:\n");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the key to be searched: ");
    scanf("%d", &key);
    result = binarySearch(arr, 0, n - 1, key);
    if (result == -1) 
    {
        printf("Element not found in the array.\n");
    } 
    else 
    {
        printf("Element found at index %d.\n", result);
    }
    return 0;
}