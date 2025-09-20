def burbuja(arr):
    n = len(arr)
    for i in range(n-1):
        for j in range(n-1-i):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]

numeros = list(map(int, input("Ingresa los números, separados por espacio: ").split()))
burbuja(numeros)
print("Ordenado: ", numeros)