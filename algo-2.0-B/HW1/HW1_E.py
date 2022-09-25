d = int(input()) 
x, y = map(int, input().split())

if (x>=0) and (y>=0) and (x+y <= d):
    res = 0
else:
    da = (x**2 + y**2)**0.5
    db = ((x - d)**2 + y**2)**0.5
    dc = (x**2 + (y - d)**2)**0.5
    if da <= db:
        if da <= dc:
            res = 1
        else:
            res = 3
    else:
        if db <= dc:
            res = 2
        else:
            res = 3
print(res)
  