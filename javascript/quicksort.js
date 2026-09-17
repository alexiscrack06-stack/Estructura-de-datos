function particion(arr, bajo, alto) {
    let pivote = arr[alto];
    let i = bajo - 1;

    for (let j = bajo; j < alto; j++) {
        if (arr[j] < pivote) {
            i++;
            [arr[i], arr[j]] = [arr[j], arr[i]];
        }
    }
    [arr[i + 1], arr[alto]] = [arr[alto], arr[i + 1]];
    return i + 1;
}

function quickSort(arr, bajo = 0, alto = arr.length - 1) {
    if (bajo < alto) {
        let pi = particion(arr, bajo, alto);
        quickSort(arr, bajo, pi - 1);
        quickSort(arr, pi + 1, alto);
    }
    return arr;
}

const arr = [10, 7, 8, 9, 1, 5];
console.log(quickSort(arr));