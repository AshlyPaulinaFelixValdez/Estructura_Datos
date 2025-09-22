import random

# generar lista de los num aleatorios
arr = [random.randint(1, 100) for _ in range(10)]
print("Números random: ", arr)

# ordenamiento de insercion
for i in range(1, len(arr)):
    key = arr[i]
    j = i - 1
    while j >= o and key < arr[j]:
        arr[j + 1] = arr[j]
        j -= 1
    arr[j + 1] = key


print("Números random ordenados: ", arr)