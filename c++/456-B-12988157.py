'''
Created on Sep 13, 2015

@author: chanakas
'''
n = int(raw_input())
ans = 1
lst2 = [1, 2, 4, 3]
lst3 = [1, 3, 4, 2]
lst4 = [1, 4]
a2 = n % 4
ans = ans + lst2[a2] + lst3[a2]
ans = (lst4[n % 2] + ans) % 5
print ans