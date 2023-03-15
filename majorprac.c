#include<stdio.h>

int main()
{
    int i,j,s,row,column;
    char c='A';
    printf("Enter Number of Rows(1,3,5,7..)\n");
    scanf("%d",&row);

    for ( i=0; i<row/2; i++)
    {
        for (s=0; s<i-1; s++)
        {
            printf(" ");
        }  
        for (j=0; j<row/2; j++)
        {
            printf("%c",c++);
        }
        printf("\n");
    } 
        for(i=row/2; i<row; i++)
    {       
        for ( j=row-1/2; j>=0; j--)
        {
            printf("%c",c++);
        }
        for ( s=i-1; s>=0; s--)
        {
            printf(" ");
        }
        printf("\n");
    }   
    
    return 0;
}