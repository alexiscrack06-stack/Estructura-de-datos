const numeros = [10, 20, 30, 40, 50];
const indice = 2;

numeros.splice(indice, 1);
console.log(numeros);

const nuevoArray = numeros.filter((_, i) => i !== indice);