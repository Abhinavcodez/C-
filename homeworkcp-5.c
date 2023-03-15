//HOMEWORK PROBLEM--5::
//FOR

#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j;
    float peri,sum=0;
    printf("Enter The no of vertices of polygon\n");
    scanf("%d",&n);
    int x[n];
    int y[n];

    printf("Enter x,y coordinates of all vertices\n");

    for (i=0; i<n; i++)
    {
        scanf("%d %d",&x[i], &y[i]);
    } 
    peri=0; 

    x[n] = x[0];
    y[n] = y[0];

    for(int k=0; k<n; k++)
    {
        peri=sqrt((x[k+1]-x[k])*(x[k+1]-x[k])+(y[k+1]-y[k])*(y[k+1]-y[k]));
        sum=sum+peri;
    }
    
    printf("%f",sum);

    return 0;
}