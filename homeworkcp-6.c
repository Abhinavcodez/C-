//HOMEWORK PROBLEM--6::

#include <stdio.h>
int main() 
{
    char c;
    int state = 0;

    while (1) 
    {
    c = getchar();
    if (c == EOF) 
    {                                                                     
        printf("End of input reached without finding 'abrakadabra'\n");
    }

    switch (state) 
    {
        case 0:                                                         
            if (c == 'a') 
            {
                state = 1;                                              
            }
            break;
        case 1:                                                       
            if (c == 'b') 
            {
                state = 2;                                            
            } else if (c != 'a') 
            {                                  
                state = 0;                                          
            }
            break;
        case 2: 
            if (c == 'r') 
            {
                state = 3; 
            } else if (c == 'a') 
            { 
                state = 1; 
            } 
            else 
            { 
                state = 0; 
            }
            break;
        case 3: 
            if (c == 'k') 
            {
                state = 4; 
            } else if (c == 'a') 
            {
                state = 1; 
            } 
            else 
            { 
                state = 0; 
            }
            break;
        case 4: 
            if (c == 'a') 
            {
                state = 5; 
            } else if (c == 'a') 
            { 
                state = 1; 
            } 
            else 
            { 
                state = 0; 
            }
            break;
        case 5: 
            if (c == 'd') 
            {
                state = 6; 
            } else if (c == 'a') 
            {
                state = 1; 
            } 
            else 
            { 
                state = 0; 
            }
            break;
        case 6: 
            if (c == 'a') 
            {
                state = 7; 
            } else if (c == 'a') 
            { 
                state = 1; 
            } 
            else 
            {
                state = 0; 
            }
            break;
        case 7: 
            if (c == 'b') 
            {
                state = 8; 
            } else if (c == 'a') 
            {
                state = 1; 
            } 
            else 
            { 
                state = 0; 
            }
        case 8:
            if (c == 'r') 
            {
                state = 9; 
            } else if (c == 'a') 
            { 
                state = 1; 
            } 
            else 
            { 
                state = 0; 
            }
        case 9: 
            if (c == 'a') 
            {
                state = 7; 
            } else if (c == 'a') 
            { 
                state = 1; 
            } 
            else 
            { 
                state = 0; 
            } 
        default: printf("\n'abrkadabra' found");                         
    }
    }
    return 0;
}