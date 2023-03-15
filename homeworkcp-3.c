//HOMEWORK PROBLEM--3::

#include <stdio.h>

int main()
{
    int card;
    printf("Enter a card number (1-52): ");
    scanf("%d", &card);

    // Determine the suit
    int suit = card / 13;
    switch (suit) 
    {
        case 0:
            printf("Clubs ");
            break;
        case 1:
            printf("Diamonds ");
            break;
        case 2:
            printf("Hearts ");
            break;
        case 3:
            printf("Spades ");
            break;
    }

    // Determine the denomination
    int denomination = card % 13;
    switch (denomination) 
    {
        case 0:
            printf("Ace");
            break;
        case 1:
            printf("2");
            break;
        case 2:
            printf("3");
            break;
        case 3:
            printf("4");
            break;
        case 4:
            printf("5");
            break;
        case 5:
            printf("6");
            break;
        case 6:
            printf("7");
            break;
        case 7:
            printf("8");
            break;
        case 8:
            printf("9");
            break;
        case 9:
            printf("10");
            break;
        case 10:
            printf("Jack");
            break;
        case 11:
            printf("Queen");
            break;
        case 12:
            printf("King");
            break;
    }

    return 0;
}