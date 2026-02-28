// SumaDeVeinteNumeros.c
// Programa que suma 20 números ingresados por el usuario

#include <stdio.h>

int main() {
    int i, numero, suma = 0; // Variables para el índice, el número y la suma total

    // Bucle para pedir 20 números
    for (i = 0; i < 20; i++) {
        printf("Ingrese el número %d: ", i + 1);
        scanf("%d", &numero);
        suma += numero; // Acumular la suma
    }

    // Mostrar el resultado final
    printf("La suma total de los 20 números es: %d\n", suma);

    return 0;
}