// /*Given two strings S1 and S2, write a program to print the number of times the first 
// string S1 appears in the second string S2 as a substring. For example if S1 is “atg” and 
// S2 is “batgccatgatatga”, then the program should print 3. Program should work 
// correctly for all possible inputs. DO NOT use any of the library functions defined under 
// strings described above*/
// #include <stdio.h>

// int countSubstring(char* s1, char* s2) 
// {
//     int count = 0;
//     int i, j, k;
//     for (i = 0; s2[i] != '\0'; i++) 
//     {
//         j = 0;
//         k = i;
//         while (s1[j] != '\0' && s2[k] != '\0' && s1[j] == s2[k]) 
//         {
//             j++;
//             k++;
//         }
//         if (s1[j] == '\0') 
//         {
//             count++;
//         }
//     }
//     return count;
// }

// int main() 
// {
//     char s1[100], s2[100];
//     printf("Enter the first string: ");
//     scanf("%s", s1);
//     printf("Enter the second string: ");
//     scanf("%s", s2);
//     int count = countSubstring(s1, s2);
//     printf("The number of times the first string appears in the second string is %d.\n", count);
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     int i,j,side;
//     printf("Enter Number side in your Pattern\n");
//     scanf("%d",&side);
//     for (i=0; i<side; i++)
//     {
//         for (j=0; j<side; j++)
//         {
//             if (i==0 || j==side-1 || i==side-1 || j==0)
//             {
//                printf(" *");
//             }
//             else
//             {
//                 printf("  ");
//             }
            
//         }
//         printf("\n");
//     }
//     return 0;
// }
#include<stdio.h>
void main()
{
char K='K';
char *s;
s="%c";
printf(s,K);
}