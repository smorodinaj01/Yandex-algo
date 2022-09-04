numbers = [int(s) for s in input().split()]
arr = set()
for num in numbers:
    if num in arr:
        print('YES')
    else:
        print('NO')
        arr.add(num)