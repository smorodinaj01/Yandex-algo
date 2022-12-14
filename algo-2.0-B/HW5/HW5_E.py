def read_and_enumerate():
    x = list(map(int, input().split()))
    for i in range(len(x)):
        x[i] = x[i], i
    x.sort()
    return x 

s = int(input())
a = read_and_enumerate()
b = read_and_enumerate()
c = read_and_enumerate()
c.sort(key = lambda x: (x[0], -x[1]))
flag = False
   
for aval, apos in a:
    cpos = len(c) - 1
    for bval, bpos in b:
        while cpos > 0 and aval + bval + c[cpos][0] > s:
            cpos -= 1
        if aval + bval + c[cpos][0] == s and (not flag or (apos, bpos, cpos) < ans):
            ans = apos, bpos, c[cpos][1]
            flag = True
if flag:
    print(*ans)
else: 
    print(-1)




