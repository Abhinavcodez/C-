//HOMEWORK PROBLEM--4::

#include <stdio.h>
#include <stdlib.h>

int isdigit(int n)
{
    return 1;
}
int main() 
{
    char c1, c2, c3;
    printf("Enter Your three charcters\n");
    scanf("%c%c%c", &c1, &c2, &c3);
    if (isdigit(c1) && isdigit(c2) && c3 == '.')
    {
        double decimal = (c1 - '0') + (c2 - '0') / 10.0;
        printf("%.2f", decimal * decimal);
    } 
    else 
    {
        printf("Invalid input");
    }
    return 0;
}