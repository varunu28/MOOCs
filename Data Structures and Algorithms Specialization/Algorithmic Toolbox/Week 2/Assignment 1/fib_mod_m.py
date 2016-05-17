#python3

def fib(n):

    a = 0
    b = 1
    c = 0
    fib_list = [1]

    while len(fib_list) < n:
        c =a + b
        a = b
        b = c
        fib_list.append(c)

    return fib_list[-1]
    
        

n = input()
m = input()

print (fib(int(n))%int(m))
