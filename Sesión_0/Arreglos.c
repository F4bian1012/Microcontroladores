#include <stdio.h>

int main() {
    // Declaración e inicialización de un arreglo de enteros
    int numeros[5] = {1, 2, 3, 4, 5};

    int i=2;
    printf("numeros[%d] = %d\n", i, numeros[i]);
    
    printf("tamaño del vector numeros = %lu\n", sizeof(numeros)); // Prints 20
    // Modificación de un elemento del arreglo
    numeros[2] = 10;
    printf("numeros[%d] = %d\n", i, numeros[i]);


    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printf("matriz[1][1] = %d\n", matriz[1][1]);
    
    return 0;
}