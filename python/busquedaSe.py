numeros = [10, 50, 30, 20, 40]
buscado = 30
indice = -1

for i in range(len(numeros)):
    if numeros[i] == buscado:
        indice = i
        break

print(f"Posición: {indice}")