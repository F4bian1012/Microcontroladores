#include <stdio.h>
#include "libreria.h"

int main() {
    int a = 20, b = 10;
    int sum = add(a, b);
    int diff = subtract(a, b);

    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", diff);
    // pause the program so the output can be read
    system("pause");
    return 0;
}
 
// la siguiente línea compila el archivo UsoDeLibrerias.c y el archivo libreria.c 
// y crea un archivo ejecutable llamado UsoDeLibrerias

// gcc UsoDeLibrerias.c libreria.c -o UsoDeLibrerias
// ./UsoDeLibrerias
