const numeros = [10, 20, 30, 40, 50];

// Opción 1: Bucle for clásico decreciente
for (let i = numeros.length - 1; i >= 0; i--) {
    console.log(`Índice ${i}: ${numeros[i]}`);
}

// Opción 2: Bucle for...of con reverse() (haciendo una copia para no alterar el array original)
for (const num of [...numeros].reverse()) {
    console.log(`Elemento: ${num}`);
}