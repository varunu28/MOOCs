//Product of Digits
/*
Write a C program that takes a positive number N and produces an output that is the product of its digits.

Explanation:
Take number 657.
Answer expected : 6 * 5 * 7 = 210

Constraint:
1<=N<=999999
Input: A single number
Output:  The value
Example 1:
Input: 657
Output: 210
Example 2:
Input: 7
Output: 7

*/

#include <stdio.h>

int main()
{
    int m;
    scanf("%d",&m);
    
    int prod=1;
    while(m>0)
    {
        prod*=m%10;
        m/=10;
    }
    
    printf("%d",prod);
    return 0;
}
