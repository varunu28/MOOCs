# Uses python3
import sys

def get_change(n):
    #write your code here
    total_coin = 0
    total_coin += int(n/10)
    n = n%10
    total_coin += int(n/5)
    n = n%5
    total_coin += n
    return total_coin



n = int(input())
print(get_change(n))

'''
Test Case 1:
Input:
2
Output:
2

Test Case 2:
Input:
28
Output:
6
'''

