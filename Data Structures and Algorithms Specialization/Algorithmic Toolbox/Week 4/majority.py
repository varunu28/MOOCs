# Uses python3
from collections import Counter

n = int(input())
input = input()
input_list = input.split(' ')
arr = [int(x.strip()) for x in input_list]
c = Counter(arr)
value, count = c.most_common()[0]
if count > int(n/2):
    print(1)
else:
    print(0)
