# Uses python2
#Find maximum pairwise product of two numbers in a given array of length n

n =input()
s = raw_input()
a = map(int, s.split())

a.sort()

print a[-1]*a[-2]


