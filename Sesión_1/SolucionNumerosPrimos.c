
#include <stdio.h>

int numPrimo(int numP);

int main(){
    int numero=0;
    scanf("%d", &numero);
    printf("\n \n");
    for (int i=2; i<numero; i++){
        int y = numPrimo(i);
        if (y==0){
            printf("%d \n", i);
        }
    }
    system("pause");
    return 0;
}


int numPrimo( int numP){
    int primo=0;
    for (int i=2; i<numP; i++){
        if (numP%i==0){
            primo=1;
            break;
        }
    }
    return primo;
}