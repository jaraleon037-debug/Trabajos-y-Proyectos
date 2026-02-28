#include <iostream>
#include <chrono>
#include <thread>
#include <string>
using namespace std;
using namespace chrono;

class Cronometro {
private:   
    time_point<high_resolution_clock> inicio;
    int aciertos;
    bool activo;
    
public:   
    Cronometro() :  aciertos(0),  activo(false) {}
    
    void iniciar() {
        inicio = high_resolution_clock::now();
        activo = true;
        aciertos = 0;
        cout << "¡Cronómetro iniciado! Escribe 'xd' y presiona Enter repetidamente.\n";
        cout << "Tienes 60 segundos. ¡Comienza ahora!\n";
    }
    
    double obtenerTiempoTranscurrido() {
        auto ahora = high_resolution_clock::now();
        auto duracion = duration_cast<duration<double>>(ahora - inicio);
        return duracion.count();
    }
    
    void incrementarAciertos() {
        aciertos++;
    }
    
    int obtenerAciertos() const {
        return aciertos;
    }
    
    bool estaActivo() const {
        return activo;
    }
    
    void detener() {
        activo = false;
    }
};

int main() {
    Cronometro cronometro;
    string entrada;
    const double DURACION = 60.0; // 1 minuto
    bool primero = true;
    
    cout << "=== CRONÓMETRO DE ESCRITURA ===" << endl;
    cout << "Tienes " << DURACION << " segundos para escribir 'xd' y presionar Enter.\n";
    cout << "Presiona Enter para comenzar...";
    cin.get();
    
    cronometro.iniciar();
    
    // Bucle principal del cronómetro
    while (cronometro.estaActivo() && cronometro.obtenerTiempoTranscurrido() < DURACION) {
        double tiempoRestante = DURACION - cronometro.obtenerTiempoTranscurrido();
        
        // Mostrar tiempo restante y solicitar entrada
        cout << "Tiempo restante: " << tiempoRestante << " segundos | Aciertos: " << cronometro.obtenerAciertos() << endl;
        cout << "Escribe 'xd' y presiona Enter: ";
        
        // Obtener entrada del usuario
        getline(cin, entrada);
        
        // Verificar si la entrada es correcta
        if (entrada == "xd") {
            cronometro.incrementarAciertos();
            cout << "¡Acierto! +1" << endl;
        } else if (entrada == "XD" || entrada == "Xd" || entrada == "xD") {
            cronometro.incrementarAciertos();
            cout << "¡Acierto! +1 (Aceptado en mayúsculas)" << endl;
        } else if (entrada != "") {
            cout << "Escribe 'xd' para contar un acierto." << endl;
        }
        
        // Pequeña pausa para evitar sobrecarga
        this_thread::sleep_for(milliseconds(100));
    }
    
    cronometro.detener();
    
    // Mostrar resultados finales
    cout << "\n=== ¡TIEMPO TERMINADO! ===" << endl;
    cout << "Tiempo total: " << DURACION << " segundos" << endl;
    cout << "Total de aciertos: " << cronometro.obtenerAciertos() << endl;
    
    if (DURACION > 0) {
        double promedio = cronometro.obtenerAciertos() / (DURACION / 60.0);
        cout << "Aciertos por minuto: " << promedio << endl;
    }
    
    return 0;
}
