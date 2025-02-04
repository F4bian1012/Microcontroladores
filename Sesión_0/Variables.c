#include <stdio.h>
// Syntax type variableName = value;
int main() {
    printf("Hello World! \n");
    int myNum = 15;            // Integer
    float myFloatNum = 5.99;   // Floating point number
    char myLetter = 'D';       // Character

    //  To print, use %d for integer, %c for char and %f for float:
    printf("%d\n", myNum);
    printf("%f\n", myFloatNum);
    printf("%c\n", myLetter);
    return 0;
}