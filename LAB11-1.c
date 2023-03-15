#include <stdio.h>
#include <string.h>
#include <math.h>

int main() 
{
   // String Functions
   char str1[50] = "Hello";
   char str2[50] = "World";
   char str3[50];
   int len;

   // string concatenation
   strcat(str1, str2);
   printf("Concatenated string: %s\n", str1);

   // string copy
   strcpy(str3, str1);
   printf("Copied string: %s\n", str3);

   // string length
   len = strlen(str1);
   printf("Length of string: %d\n", len);

   // Math Functions
   double num1 = 2.5, num2 = 5.5;
   double result;

   // absolute value
   result = fabs(num1);
   printf("Absolute value of %lf = %lf\n", num1, result);

   // square root
   result = sqrt(num2);
   printf("Square root of %lf = %lf\n", num2, result);

   // power
   result = pow(num1, num2);
   printf("%lf raised to the power of %lf = %lf\n", num1, num2, result);

   return 0;
}