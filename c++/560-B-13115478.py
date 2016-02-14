'''
Created on Sep 20, 2015

@author: chanakas
'''
n, m = map(int, raw_input().split())
a, b = map(int, raw_input().split())
c, d = map(int, raw_input().split())

ans = False
for i in range(4):
    if(((a + c) <= m and max(b, d) <= n) or ((max(a, c) <= m) and (b + d) <= n)):
        ans = 1
    if i % 2 == 0:
        a, b = b, a
    c, d = d, c
if ans:
    print 'YES'
else:
    print 'NO'