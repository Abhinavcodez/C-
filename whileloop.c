#include<stdio.h>
int main() 
{
    int prev,curr,len=0;
    printf("Enter your series\n");
    scanf("%d",&prev);
    if (prev==-1)
    {
        len=1;
        scanf("%d",&curr);

        while (curr!=1)
        {
            if(prev<curr)
            {
            len=len+1;
            }
            else
            {
            len=1;
            }
            prev=curr;
            scanf("%d",&curr);
        }
        
    }
    printf("%d",len); 
    return 0;
}