#include <stdio.h>

/*
Sintaxis de un ciclo while:
while (condición) {
    // Código a ejecutar
}
*/

int main() {
    int counter = 0;

    // Inicia el ciclo while
    // La condición es que el contador sea menor que 5
    while (counter < 10) {
        // Imprime el valor actual del contador
        printf("Counter: %d\n", counter);

        // Incrementa el contador en 1
        counter++;
    }

    counter = 0;
    printf("Ciclo while con break \n");
    while (counter < 10) {
        if (counter == 3) {
            break;
        }
        printf("Counter: %d\n", counter);
        counter++;
    }
    counter = 0;
    printf("Ciclo while con continue \n");
    while (counter < 10) {
        if (counter == 3) {
            counter++;
            continue;
        }
        printf("Counter: %d\n", counter);
        counter++;
    }

    return 0;
}