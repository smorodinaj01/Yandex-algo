N = int(input())
values = list(map(int, input().split()))
print(sum(values) - max(values))