//Find whether two given strings are permutations of each other
/*
Write a program to find whether two given strings are permutations of each other.  A string str1 is a permutation of
str2 if all the characters in str1 appear the same number of times in str2 and str2 is of the same length as str1.


Input: Two strings S1 and S2 
Output: 
yes - if they satisfy given criteria
no - otherwise

Constraints:
1 <= len(S1), len(S2) <= 100. 
Characters from ASCII range 0 to 127.
White space will not be given in the string.
*/

#include <stdio.h>
# define count 256

int areperm(char *str1, char *str2)
{
    int count1[count] = {0};
    int count2[count] = {0};
    int i;

    for (i = 0; str1[i] && str2[i];  i++)
    {
        count1[str1[i]]++;
        count2[str2[i]]++;
    }

    if (str1[i] || str2[i])
      return 0;

    for (i = 0; i < count; i++)
        if (count1[i] != count2[i])
            return 0;
 
    return 1;
} 
 
int main()
{
    char str1[100];
    char str2[100];
    gets(str1);
    gets(str2);
    if ( areperm(str1, str2) )
      printf("yes");
    else
      printf("no");
 
    return 0;
}