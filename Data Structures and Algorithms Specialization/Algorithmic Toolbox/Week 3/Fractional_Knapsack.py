# Uses python3
import sys
def get_optimal_value(capacity, weights, values):
    value = 0.
    value_per_unit = []
    
    for i in range(len(weights)):
        value_per_unit.append(values[i]/weights[i])
    
    for j in range(len(value_per_unit)):
        max_val = max(value_per_unit)
        if weights[value_per_unit.index(max_val)] != 0 and capacity > 0:
            req_wt = min(weights[value_per_unit.index(max_val)], capacity)
            value += req_wt * max_val
            weights[value_per_unit.index(max_val)] -= req_wt
            capacity -= req_wt
            value_per_unit[value_per_unit.index(max_val)] = 0
            
    return value

n, capacity = map(int,sys.stdin.readline().split())

weights = []
values = []

for i in range(n):
    a,b = map(int,sys.stdin.readline().split())
    weights.append(b)
    values.append(a)

opt_value = get_optimal_value(capacity, weights, values)
print("{:.10f}".format(opt_value))

'''
Test Case 1:
Input:
3 50
60 20
100 50
120 30
Output:
180.0000

Test Case 2:
Input:
1 10
500 30
Output:
166.6667
'''
