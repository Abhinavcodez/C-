//HOMEWORK PROBLEM--1::

#include<stdio.h>
int main()
{   
    for (int i=1; i<=8 ; i++)
    {
        for (int j=1; j<=8; j++)
        {
            if(i%2!=0)
            {
            if(j<8)
            {
            if(j%2!=0)
                { 
                printf("|_|");
                }
            if (j==8)
                {
                    printf("\n");
                }    
            else
            {
                printf("  ");
            }
            }
            else
            {
                printf("\n");
            }

            }
            else
            {
            if(i%2==0)
            {
            if(j<8)
            {
            if(j%2==0)
                {
                printf("|_|");
                }
            if (j==8)
                {
                    printf("\n");
                }    
            else
            {
                printf("  ");
            }
            }
            else
            {
                printf("\n");
            }

            }                
            }    
        }
    }
    return 0;
}
