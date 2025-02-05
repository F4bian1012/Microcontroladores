#include <stdio.h>
/*
Sintaxys de una función:
tipo_de_retorno nombre_de_la_función(parametros) {
    // Código a ejecutar
}
tipo_de_retorno: tipo de dato que la función regresa
nombre_de_la_función: nombre de la función
parametros: valores que la función recibe
*/


// Declaración de la función
void saludar(); // Declaración de la función saludar que no recibe ni regresa ningún valor (void)
int sumar(int a, int b); // Declaración de la función sumar que recibe dos enteros y regresa un entero

int main() {
    // Llamada a la función saludar
    saludar();

    // Llamada a la función sumar y almacenamiento del resultado
    int resultado = sumar(3, 4);
    printf("La suma de 3 y 4 es: %d\n", resultado);

    return 0;
}

// Definición de la función saludar que no recibe ni regresa ningún valor (void)
void saludar() {
    printf("Hola, bienvenido!\n");
}

// Definición de la función sumar que recibe dos enteros y regresa un entero
int sumar(int a, int b) {
    return a + b;
}