'''
Created on 21-Nov-2014

@author: akash
'''
num = int(input())
j = 1
for i in range(1, 20):
    res = str(num + i)
    if res.find("8") != -1:
        j = i
        break
print(j)