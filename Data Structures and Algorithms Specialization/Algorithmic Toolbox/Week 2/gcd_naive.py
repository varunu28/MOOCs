#Naive algorithm to find GCD

def NaiveGCD(a,b):
    best = 0
    for d in range(1 , a+b):
        if a%d == 0 and b%d ==0:
            best = d
    return best

a = int(raw_input("Enter the first number: "))
b = int(raw_input("Enter the second number: "))

print NaiveGCD(a,b)
