dictionary = {}

for _ in range(int(input())):
    color, value = input().split()
    dictionary[color] = dictionary.get(color, 0) + int(value)

l = dictionary.keys() # получаем ключи
l = list(l) # превращаем его в обычный список
l.sort() # сортируем список

for i in l: # вывод элементов словаря по алфавиту
    print(i, dictionary[i])
