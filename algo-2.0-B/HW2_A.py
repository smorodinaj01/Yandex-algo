max = 0
N = 0
number = -1

while number != 0:
    number = int(input())
    if number > max:
        max, N = number, 1
    elif number == max:
        N += 1       
print(N)

# Последовательность состоит из натуральных чисел и завершается числом 0. 
# Определите, сколько элементов этой последовательности равны ее наибольшему элементу.