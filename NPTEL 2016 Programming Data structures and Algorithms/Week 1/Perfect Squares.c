//Perfect Squares
/*
Write a program to find the number of perfect squares between given two numbers A and B (both inclusive). A number 
is called a perfect square if it can be written as x*x for some integer x.

Constraints:
Both A and B are positive. They both are less than 100,000.

Input: Two numbers A and B separated by a space
Output: Count of the number of perfect squares


Example 1:
Input: 3 10
Output: 2


Example 2:
Input: 16 70
Output: 5
*/

#include <stdio.h>

int isPerfect(int n) //Function to check if a number is perfect square is not
{
    int a;
    for(a = 0; a <= n; a++)
    {
        if (n == a * a)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int m , n , count=0;
    scanf("%d",&m);
    scanf("%d",&n);
    
    while(m<=n)
    {
        if(isPerfect(m)==1)
        {
            count++;
        }
        m++;
    }
    
    printf("%d\n",count);
    return 0;
}
