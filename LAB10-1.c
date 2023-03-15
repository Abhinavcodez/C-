/*WAP to swap two numbers using Call by value and Call by Reference.*/
#include<stdio.h>
/*Call by Value*/

int swap(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("\nThe values of a and b after swapping using call by value are a=%d b=%d",a,b);
}

/*Call by Reference*/
void swapreference(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    printf("\nThe values of a and b after swapping using call by reference are a=%d b=%d",*a,*b);
}
int main()
{
    int a,b;
    printf("Enter two Numbers to Swap\n");
    scanf("%d%d",&a,&b);
    printf("\nNumbers Before Swapping %d %d",a,b);
    swap(a,b);
    swapreference(&a,&b);
    return 0;
}