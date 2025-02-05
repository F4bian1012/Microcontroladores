#include <stdio.h>
/*
Sintaixs de un ciclo for:
for (inicialización; condición; incremento) {
    // Código a ejecutar
}
*/


int main() {
    // Ciclo for: se ejecuta mientras i sea menor que 10
    // Inicialización: i = 0
    // Condición: i < 10
    // Incremento: i++
    printf("Ciclo for con incremento de 1\n");
    for (int i = 0; i < 10; i++) {
        // Imprime el valor actual de i
        printf("El valor de i es: %d\n", i);
    }

    // Ciclo for: se ejecuta mientras i sea menor que 10 
    printf("Ciclo for con incremento y break\n");
    for (int i = 0; i < 10; i++) {
        // Imprime el valor actual de i
        if (i == 5) {
            break;
        }
        printf("El valor de i es: %d\n", i);
    }

    // Ciclo for: se ejecuta mientras i sea menor que 10 y no sea igual a 5
    printf("Ciclo for con incremento y continue\n");
    for (int i = 0; i < 10; i++) {
        // Imprime el valor actual de i
        if (i == 5) {
            continue;
        }
        printf("El valor de i es: %d\n", i);
    }

    return 0;
}