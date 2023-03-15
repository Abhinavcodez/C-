//WAP TO SUMOF EVEN SERIES::--
//PROBLEM-2

#include<stdio.h>

int series(int n)
{
    if(n<=0)
    {
        return 0;
    }
    return n+series(n-2);
}
int main()
{
    int n;
    printf("Enter Number Of Terms\n");
    scanf("%d",&n);

    int x=series(n);
    printf("%d",x);
}