'''
Problem Name: Sum It Up
Problem Link: https://erdos.sdslabs.co/problems/6
Author: Ashish Kumar (ashishkr23438)
'''
import time
tStart = time.time()
n = 3334**3334
A = 0
while n!=0:
	d = n%10
	n = n//10
	A += d
B = 0
# A = 52240
while A!=0:
	d = A%10
	A = A//10
	B += d
# B = 13
print(2013*4)
print("Time Taken: %s" % (time.time() - tStart))
'''
8052
Time Taken: 0.35379672050476074
'''