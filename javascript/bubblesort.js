function bubbleSort(arr) {
  let n = arr.length;
  let intercambio;

  for (let i = 0; i < n - 1; i++) {
    intercambio = false;

    for (let j = 0; j < n - 1 - i; j++) {
      if (arr[j] > arr[j + 1]) {
        
        [arr[j], arr[j + 1]] = [arr[j + 1], arr[j]];
        intercambio = true;
      }
    }

    
    if (!intercambio) break;
  }

  return arr;
}

// Ejemplo de uso
const numeros = [64, 34, 25, 12, 22, 11, 90];
console.log("Arreglo ordenado:", bubbleSort(numeros));