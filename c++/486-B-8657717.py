'''
Created on 11-Nov-2014

@author: akash
'''
def transform(a, n, m):
    row = [False for i in range(n)]
    col = [False for i in range(m)]
    mat = [[True for i in range(m)] for j in range(n)]
    for i in range(n):
        for j in range(m):
            if a[i][j] == False:
                row[i] = True
                col[j] = True
    for i in range(n):
        for j in range(m):
            if row[i] == True or col[j] == True:       
                mat[i][j] = False
    return mat

def isvlid(inp, mat, m, n):
    row = [False for i in range(n)]
    col = [False for i in range(m)]
    newinp = [[False for i in range(m)] for j in range(n)]
    for i in range(n):
        for j in range(m):
            if mat[i][j] == True:
                row[i] = True
                col[j] = True
    for i in range(n):
        for j in range(m):
            if row[i] == True or col[j] == True:       
                newinp[i][j] = True
    for i in range(n):
        for j in range(m):
            if inp[i][j] != newinp[i][j]:
                return False
    return True
line = input()
lst = line.split()
n = int(lst[0])
m = int(lst[1])
'accpet input'
inp = [[False for i in range(m)] for j in range(n)]
for i in range(n):
    line = input()
    lst = line.split()
    for j in range(m):
        inp[i][j] = True if int(lst[j]) == 1 else False

mat = transform(inp, n, m)
if isvlid(inp, mat, m, n): 
    print("YES")
    for i in range(n):
        for j in range(m):
            if mat[i][j]:
                print("1", end=" ")
            else:
                print("0", end=" ")
        print()
else:
    print("NO")