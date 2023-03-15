//HOMEWORK PROBLEM--2::

#include <stdio.h>
#include <stdbool.h>

int main() 
{
    int y;
    int d;
    printf("Enter the year: ");
    scanf("%d", &y);
    printf("Enter the day of the year: ");
    scanf("%d", &d);

    int daysInMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) 
    {
        daysInMonth[1] = 29;
    }
    int month = 0;
    int day = 0;
    while (d > daysInMonth[month]) 
    {
        d -= daysInMonth[month];
        month++;
    }
    day = d;
    month++;
    printf("%d/%d/%d", month, day, y);
    return 0;
}