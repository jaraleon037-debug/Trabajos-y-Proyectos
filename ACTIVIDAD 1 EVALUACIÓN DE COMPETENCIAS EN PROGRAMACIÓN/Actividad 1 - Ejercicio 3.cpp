#include <iostream>
using namespace std;

int main() {
    int numeros[20];

    // Cargar el arreglo
    for (int i = 0; i < 20; i++) {
        cout << "Ingrese el numero para la posicion " << i << ": ";
        cin >> numeros[i];
    }

    cout << "\nNumeros en posiciones pares:" << endl;

    // Mostrar posiciones pares (0, 2, 4, 6...)
    for (int i = 0; i < 20; i += 2) {
        cout << "Posicion " << i << ": " << numeros[i] << endl;
    }

    return 0;
}