#python2

def fib(n):
    a = 0
    b = 1
    c = 0
    for i in range(1,n):
        c = a + b
        a = b
        b = c
    return c

n = int(raw_input())

if n > 1:
        print fib(n)
elif n==1:
    print 1
elif n == 0:
    print 0
    

