'''
Created on 11-Nov-2014

@author: akash
'''
n = int(input())
e = int(n / 2)
o = int(n / 2)
if n & 1 :
    o += 1
print(e * (e + 1) - o ** 2)