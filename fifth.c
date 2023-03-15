//WAP TO FIND ROOTS OF A QUADRATIC EQUATION::--
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float r1,r2,r;
    printf("Enter coefficient of x sqaure\t\n");
    scanf("%d",&a);
    printf("Enter coefficient of x\t");
    scanf("%d",&b); 
    printf("Enter constant term\t");
    scanf("%d",&c);
    float d;
    d= sqrt(b*b-4*a*c);
    r1=(-b+d)/2*a;
    r2=(-b-d)/2*a;
    r=-b/2*a;
    if(a!=0)
    {  
    if (d>0)
    {
        printf("The roots of quadratic equation \n real and unequal %dxsquare+%dx+%d=0\n are::-- %f \t and %f ",a,b,c,r1,r2);
    }
    else if (d==0)
    {
       printf("The two roots of quadratic equation are real and equal\n %dxsquare+%dx+%d=0\n ::-- \t %f",a,b,c,r);
    }
    else
    {
        printf("There is no real roots of this quadratic equation\n");
    }
    }
    else
    {
        printf("oops! it is not a quadratic equation\t\n");
    }
    return 0;
}