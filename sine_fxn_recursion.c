#include <stdio.h>
#include <math.h>

char sine_series(char x, int n);
int fact(int n)
{
    if (n==0)
    {
        return 1;
    }
    return n*fact(n-1);
}
int main()
{
    int n;
    char x;

    printf("Enter x: ");
    scanf("%c", &x);
    printf("Enter the number of terms in the series: ");
    scanf("%d", &n);
    char y=sine_series(x,n);

    for (int i=0; i<n; i++)
    {
        printf("%c + ",y);
    }

    return 0;
}

char sine_series(char x, int n)
{
    if (n==0) 
    {
        return 0;
    }
    char term = pow(-1, n-1) * pow(x, 2 * n-1) / fact(2 * n-1);
    return term + sine_series(x, n - 1);
}