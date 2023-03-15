//WAP to print fibonacci series till n::--

#include <stdio.h>
int main() 
{
  int i, n;                     //Initializing and declaring of the first, second number
  int t1 = 0, t2 = 1;
  int nextTerm = t1 + t2;

  printf("Enter the number of terms: \n");  //Taking input from user for number of terms 
  scanf("%d", &n);

  printf("Fibonacci Series: %d,%d,", t1, t2);

  for (i=3; i<=n; ++i)           //Printing nextterms of series
  {
    printf("%d,",nextTerm);
    t1 = t2;
    t2 = nextTerm;
    nextTerm = t1 + t2;
  }
  return 0;
}