numeros = []
for i in range(10):
       num = int(input(f"Ingrese el número {i+1}: "))
    numeros.append(num)

print("Tus números: ", numeros)

print("Orden inverso: ", numeros[::-1])