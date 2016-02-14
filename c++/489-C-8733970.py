'''
Created on 17-Nov-2014

@author: akash
'''
m, s = list(map(int, input().split()))
smin = s
lstmax = [0 for i in range(m)]
lstmin = [0 for i in range(m)]
for i in range(m):
    if s == 0:
        lstmax[i] = 0
    elif s >= 9:
        lstmax[i] = 9
        s -= 9
    else:
        lstmax[i] = s
        s = 0
if m == 1 and smin == 0:
    print(0, 0)
elif s == 0 and smin != 0:
    lstmin = lstmax[::-1]
    if lstmin[0] == 0:
        lstmin[0] = 1
        j = 1
        while lstmin[j] == 0:
            j += 1
        lstmin[j] -= 1
    for i in range(len(lstmin)):
        print(lstmin[i], end="")
    print(" ", end="")
    for i in range(len(lstmax)):
        print(lstmax[i], end="")
else:
    print(-1, -1)