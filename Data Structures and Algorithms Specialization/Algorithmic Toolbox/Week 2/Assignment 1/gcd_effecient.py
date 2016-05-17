#python2

def Euclid_GCD(a , b):
    if b == 0:
        return a
    else:
        return Euclid_GCD(b , a%b)

a= input()
b= input()
#a, b = raw_input().split()
#a , b = [int(a), int(b)]

print (a*b)/Euclid_GCD(a , b)
