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

last_dig =[0,1]

c = 2
a=2
while c<60:
    last_dig.append(fib(a)%10)
    a+=1
    c+=1


if n > 0:
        print last_dig[n%60]



