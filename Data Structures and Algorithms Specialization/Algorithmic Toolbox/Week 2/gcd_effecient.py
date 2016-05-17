#Effecient algorithm to find GCD - Euclid's Algorithm

def Euclid_GCD(a , b):
    if b == 0:
        return a
    else:
        return Euclid_GCD(b , a%b)

a = int(raw_input("Enter the first number: "))
b = int(raw_input("Enter the second number: "))

print Euclid_GCD(a , b)
