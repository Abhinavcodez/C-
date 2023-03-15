//ASSIGNMENT-3 PROBLEM-5::--
//WAP to print elements of a 2-D array. The time complexity of your program should be O(N).

#include<stdio.h>

int main()
{
    
    int arr[2][2]={1,2,3,4};
    int i,j;
    i=j=0;

    for(j<2; i<2; i++, j++)
    {    
    printf("%d ",arr[i][j]);
    if (j==1)
    {
        printf(" \n");
    }
    }
    return 0;
}