import random

# generar lista de nums aleatorios
arr = [random.randint(1, 100) for _ in range(10)]
print("Números random: ", arr)

for i in range(len(arr)):
    min_idx = i
    for j in range(i + 1, len(arr)):
        if arr[j] < arr[min_idx]:
            min_idx = j
    arr[i], arr[min_idx] = arr[min_idx], arr[i]

print("Números random ordenados: ", arr)