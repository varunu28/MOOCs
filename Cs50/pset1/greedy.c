#include <stdio.h>
#include <math.h>
#include <cs50.h>

int main(void)
{
    float change = 0.00;
    while (change < 1)
    {
        printf("O hai! How much change is owed?\n");
        change = GetFloat();
        if (floor(change * 100) < 1)
        {
            change = 0;
        }
        else
        {
            change = round(change * 100); 
        }
    }
    
    int coins = 0;
    int cents = change;
    coins = cents / 25;
    cents = cents % 25;
    coins += cents / 10;
    cents = cents % 10;
    coins += cents / 5;
    cents = cents % 5;
    coins += cents / 1;
    
    printf("%d\n", coins);
    
    return 0;
}