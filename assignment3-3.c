/*WAP TO MULTIPLY A MATRIX::--

#include<stdio.h>

int main()
{
    int i,j,r1,c1,r2,c2;
    printf("Enter Number of Rows and Colums of Your First matrix\n");
    scanf("%d %d",&r1,&c1);
    printf("Enter Number of Rows and Colums of Your Second matrix\n");
    scanf("%d %d",&r2,&c2);

    for (i=0; i<r1; ++i)
    {
        for (j=0; j<c1; ++j)
        {
            int arr1[i][j];
            arr1[1][1]=0;
            printf("Enter a%d%d of First matrix\n",1+i,1+j);
            scanf("%d",&arr1[i][j]);
        }
    }

    for (i=0; i<r2; ++i)
    {
        for (j=0; j<c2; ++j)
        {
            int arr2[i][j];
            arr2[1][1]=0;
            printf("Enter a%d%d of Second matrix\n",1+i,1+j);
            scanf("%d",&arr2[i][j]);
        }
    }

    for (i = 0; i < r1; ++i)
    {
        for (j = 0; j < c1; ++j) 
        {
            int mult[i][j],arr1[i][j],arr2[i][j];
            mult[i][j] = 0;
            mult[i][j] += arr1[i][j]*arr2[j][i];
        }
    }

    for (i=0; i<r1; ++i)
    {
        for (j=0; j<c1; ++j)
        {
            int mult[i][j];
            printf("%d  ",mult[i][j]);
            if (j==r1-1)
            {
                printf(" \n");
            }   
        }  
    }
    
    return 0;
}
*/
//ASSIGNMENT-3 PROBLEM-4::--

#include<stdio.h>    
#include<stdlib.h>  
int main()
{  
int a[10][10],b[10][10],mul[10][10],r,c,i,j,k;    
system("cls");  
printf("enter the number of row=");    
scanf("%d",&r);    
printf("enter the number of column=");    
scanf("%d",&c);    
printf("enter the first matrix element=\n");    
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
scanf("%d",&a[i][j]);    
}    
}    
printf("enter the second matrix element=\n");    
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
scanf("%d",&b[i][j]);    
}    
}    
    
printf("multiply of the matrix=\n");    
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
mul[i][j]=0;    
for(k=0;k<c;k++)    
{    
mul[i][j]+=a[i][k]*b[k][j];    
}    
}    
}    
//for printing result    
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
printf("%d\t",mul[i][j]);    
}    
printf("\n");    
}    
return 0;  
}