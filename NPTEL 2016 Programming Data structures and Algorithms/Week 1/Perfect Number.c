//Perfect Number
/*
Write a program to find whether a given number (say x) is a “perfect number” or not.

Definition of Perfect number:
A perfect number is a positive integer that is equal to the sum of its proper positive divisors excluding the number itself. By this definition, 1 is not a perfect number.

Explanation:
Take number 6.
Proper positive divisors of 6 is 1,2,3 and their sum is 1+2+3=6.
So, 6 is a perfect number.
Constraint:
1<=x<=1,000,000 

Input: A single positive number  x
Output:
yes if given number x is a perfect number
no if given number x is not a perfect number

Example 1:
Input: 6
Output: yes

Example 2:
Input: 7
Output: no
*/

#include <stdio.h>

int isPerfect(int n)
{
    int sum=0;
    int a=1;
    
    while(a<=n/2)
    {
        if(n%a==0)
        {
            sum+=a;
        }
        a++;
    }
    
    if(sum==n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int m;
    scanf("%d",&m);
    
    if(isPerfect(m)==1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }

    return 0;
}
