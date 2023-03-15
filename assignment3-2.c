//ASSIGNMENT-3 PROBLEM::--3
//WAP to transpose a matrix

#include<stdio.h>

int main()
{
    int r,c,i,j;
    printf("Enter your array row and column\n");
    scanf("%d%d",&r,&c);

    int arr[r][c];
    printf("Enter your array element\n");

    for (i=0; i<r; ++i)
    {
        for(j=0; j<c; ++j)
        {
        scanf("%d",&arr[i][j]);
        }
    }
    int trans[i][j];

    for (i=0; i<r; ++i)
    {
        for (j=0; j<c; ++j)
        {
            trans[i][j]=arr[j][i];
        }
    }

    for  (i = 0; i <r; i++)
    {
        for ( j=0; j<c; j++)
        {
            printf("%d  ",trans[i][j]);
            if (j==r-1)
            {
                printf(" \n");
            }
            
        }
        
    }
      
    return 0;
}