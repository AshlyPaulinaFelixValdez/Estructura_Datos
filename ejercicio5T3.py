# búsqueda lineal

def busqueda_lineal(arreglo, buscado):
    for i in range(len(arreglo)):
        if arreglo[i] == buscado:
            return i # devuelve la posición
    return -1 #no encontrado

numeros = [10, 20, 30, 40]
print(busqueda_lineal(numeros, 30)) #2