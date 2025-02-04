#include <stdio.h>

int main() {
    int a = 10, b = 20, c;

    // Arithmetic Operators
    c = a + b;
    printf("a + b = %d\n", c);
    c = a - b;
    printf("a - b = %d\n", c);
    c = a * b;
    printf("a * b = %d\n", c);
    c = b / a;
    printf("b / a = %d\n", c);
    c = b % a;
    printf("b %% a = %d\n", c);

    // Relational Operators
    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);
    printf("a > b: %d\n", a > b);
    printf("a < b: %d\n", a < b);
    printf("a >= b: %d\n", a >= b);
    printf("a <= b: %d\n", a <= b);

    // Logical Operators
    printf("(a && b): %d\n", (a && b));
    printf("(a || b): %d\n", (a || b));
    printf("!(a && b): %d\n", !(a && b));

    // Bitwise Operators
    printf("a & b: %d\n", a & b);   // AND
    printf("a | b: %d\n", a | b); // OR
    printf("a ^ b: %d\n", a ^ b); // XOR
    
    printf("a << 2: %d\n", a << 2); // Binario: 1010 -> 101000 (40)
    printf("a >> 2: %d\n", a >> 2); // Binario: 1010 -> 10  (2)

    // Assignment Operators
    c = a;
    printf("c = a: %d\n", c);
    c += a;
    printf("c += a: %d\n", c);
    c -= a;
    printf("c -= a: %d\n", c);
    c *= a;
    printf("c *= a: %d\n", c);
    c /= a;
    printf("c /= a: %d\n", c);
    c %= a;
    printf("c %%= a: %d\n", c);

    // Increment and Decrement Operators
    printf("a++: %d\n", a++);
    printf("++a: %d\n", ++a); 
    printf("a--: %d\n", a--);
    printf("--a: %d\n", --a);

    return 0;
}