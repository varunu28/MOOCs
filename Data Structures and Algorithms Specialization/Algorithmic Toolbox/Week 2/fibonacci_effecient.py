#Effecient algorithm to find nth Fibonacci Number

def fib(n):
    a = 0
    b = 1
    c = 0
    for i in range(2,n):
        c = a + b
        a = b
        b = c
    return c

n = int(raw_input("Enter a number: "))

if n >= 0:
        print fib(n)
else:
        print "No number possible"
