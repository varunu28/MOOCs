# Uses python3
import sys

def binary_search(arr, lower, upper, n):

    while lower <= upper:

        mid = lower + int((upper - lower)/2)
        
        if arr[mid] == n:
            return mid

        elif arr[mid] < n:
            lower = mid + 1

        else:
            upper = mid - 1
    
    return -1

    
if __name__ == '__main__':
    input = sys.stdin.read()
    data = list(map(int, input.split()))
    n = data[0]
    m = data[n + 1]
    a = data[1 : n + 1]
    for x in data[n + 2:]:
        # replace with the call to binary_search when implemented
        print(binary_search(a,0,len(a) - 1, x), end = ' ')
'''
arr = [ 12, 34, 42, 120, 440 ]
n = 1

print(binary_search(arr, n))
'''
