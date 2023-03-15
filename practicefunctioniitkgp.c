/*Write a C function say void GuessMe( ) that assumes a number between 1 and 100
inclusive. In your function, you can call int rand( ) function, which is defined in C library to
assume such a number.  From your function prompt the user to guess the number and enter
the number he has guessed. If the user guesses the number correctly, print out a
congratulatory message and exit.If the user makes a wrong guess, the user is given an
opportunity to guess again. The process may be repeated till user guesses correctly. Print the
number of guesses a user makes to get the correct value*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void guessme()
{
    srand(time(NULL));
    int rand(void);
    int n;
    scanf("%d",&n);
    if (n==rand())
    {
        printf("!Congratulations!\n");
    }
    else
    {
        printf("Wrong Guess\n");
        guessme();
    }
}

int main()
{
    int n;
    printf("Guess Number?\n");
    guessme();

    printf("%d",scanf("%d",n));

    return 0;
}