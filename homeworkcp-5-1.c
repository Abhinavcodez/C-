//HOMEWORK PROBLEM--5.1::
//WHILE

#include<stdio.h>
#include<math.h>
int main()
{
    int n,i=0,k=0;
    float peri,sum=0;
    printf("Enter The no of vertices of polygon\n");
    scanf("%d",&n);
    int x[n];
    int y[n];

    printf("Enter x,y coordinates of all vertices\n");

    while(i<n)
    {
        scanf("%d %d",&x[i], &y[i]);
        i++;
    } 
    peri=0; 

    x[n] = x[0];
    y[n] = y[0];

    while(k<n)
    {
        peri=sqrt((x[k+1]-x[k])*(x[k+1]-x[k])+(y[k+1]-y[k])*(y[k+1]-y[k]));
        sum=sum+peri;
        k++;
    }
    
    printf("%f",sum);

    return 0;
}