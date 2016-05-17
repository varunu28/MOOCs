#Naive algorithm to find nth Fibonacci Number

def fibRec(n):
        if n <= 1:
                return n
        else:
                return fibRec(n-1) + fibRec(n-2)

n = int(raw_input("Enter a number: "))

if n >= 0:
        print fibRec(n)
else:
        print "No number possible"
