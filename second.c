#include <stdio.h>
int main()
{
int maths, physics, chemistry, sum, average;
printf("enter the marks in subject maths\n");
scanf("%d", &maths);
printf("enter the marks in subject physics \n");
scanf("%d", &physics);
printf("enter the marks in subject chemistry \n");
scanf("%d", &chemistry);
sum = (maths + physics  + chemistry);
printf ("The sum of three subjects is %d\n", sum);
average = (maths + physics  + chemistry)/3 ;
printf ("The average of three subjects is %d\n", average);
return 0;
}