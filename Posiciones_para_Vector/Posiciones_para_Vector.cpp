// PosicionesParesVector.c
// Programa que muestra los números almacenados en posiciones pares de un vector

#include <stdio.h>

int main() {
    int numeros[20]; // Array (vector) de 20 posiciones
    int i;

    // Bucle para ingresar los 20 números
    for (i = 0; i < 20; i++) {
        printf("Ingrese el número en la posición %d: ", i);
        scanf("%d", &numeros[i]);
    }

    // Mostrar los valores en posiciones pares
    printf("\n Números en posiciones pares:\n");
    for (i = 0; i < 20; i++) {
        if (i % 2 == 0) { // Si el índice es par
            printf("Posición %d: %d\n", i, numeros[i]);
        }
    }

    return 0;
}
