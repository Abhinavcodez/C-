//Assignment 3 problem1::--
//WAP to compute mean, median and mode of elements stored in an array.

#include<stdio.h>

int mode(int a[],int n) 
{
   int maxValue = 0, maxCount = 0, i, j;

   for (i=0; i<n; ++i) 
   {
      int count = 0;
      
      for (j=0; j<n; ++j) 
      {
         if (a[j] == a[i])
         ++count;
      }
      
      if (count >maxCount) 
      {
         maxCount = count;
         maxValue = a[i];
      }
   }
   return maxCount;
   return maxValue;
}

int main()
{
    int n,i,sum=0;
    float mean=0;
    printf("Enter no of terms you want in your array\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter your values\n");

    for (i=1; i<=n; i++)
    {
        scanf("%d",&a[i]);
    }
    //MEAN::--

    for (i=1; i<=n; i++)
    {
        sum=sum+a[i];
    }
    
    mean=sum/n;
    printf("The Mean of the Entered Array is--\t%0.3f\n\n",mean);

    //MEDIAN::--

    int *p1,*p2,*p3;
    p1=&a[(n+1)/2];
    p2=&a[(n/2+1)];
    p3=&a[(n/2)];
    float p4=(*p2+*p3)/2;
    if (n%2!=0)
    {
        printf("The median of the entered array is--\t%d",*p1);
    }
    else
    {
        printf("The median of the entered array is--\t%0.3f\n\n",p4);
    }
    
    //MODE::--

    printf("The Mode of the entered array is--\t%d", mode(a,n));
    
    return 0;
}