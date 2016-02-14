'''
Created on 17-Nov-2014

@author: akash
'''
def findmin(lst, i):
    minn = i
    minval = lst[i]
    for j in range(i, len(lst)):
        if minval > lst[j]:
            minval = lst[j]
            minn = j
    return minn
n = int(input())
lst = list(map(int, input().split()))
ans = []
for i in range(n):
    j = findmin(lst, i)
    if i != j:
        lst[i], lst[j] = lst[j], lst[i]
        ans.append([i, j])
print(len(ans))
for i in range(len(ans)):
    print(ans[i][0], " ", ans[i][1])