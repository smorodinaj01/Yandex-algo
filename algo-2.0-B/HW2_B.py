arr = list(map(int, input().split()))
left = [0]*len(arr)
shop_pos = -100 # просто большое число слева

for i in range(len(arr)):
    if arr[i]==2:
        shop_pos = i
    if arr[i]==1:
        left[i] = i - shop_pos

ans = 0
shop_pos = 100 # просто большое число

for i in range(len(arr) - 1, -1, -1):
    if arr[i]==2:
        shop_pos = i
    if arr[i]==1:
        min_dist = min(shop_pos - i, left[i])
        ans = max(ans, min_dist)
print(ans)    



# 2 0 1 1 0 1 0 2 1 2
# для всех домов находим минимальное расстояние до ближ магазина
# потом из всех минимумов находим максимум - это ответ

# какое наибольшее расстояние приходится преодолевать жителям Нового проспекта, 
# чтобы дойти от своего дома до ближайшего магазина.

#  1 жилой дом, 
#  2 магазин, 
#  0 офисное здани
