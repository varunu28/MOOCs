#include<cs50.h>
#include<stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(void)
{
    printf("minutes: ");
    int min=GetInt();
    int bottles = min*12;
    printf("bottles: %d\n",bottles);
        
}