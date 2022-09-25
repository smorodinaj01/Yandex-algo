a, b, c = map(int, input().split())
if a == b:
    print(1)
elif b <= 12 and a <= 12:
    print(0)
else:
    print(1)