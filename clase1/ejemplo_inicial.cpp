#include <iostream>
#include <string>

using namespace std;

// MÓDULO II: Definición de una función simple
// Esta función recibe un valor y calcula el 7% de ITBMS (impuesto en Panamá)
float calcularImpuesto(float monto) {
    const float TASA_ITBMS = 0.07; 
    return monto * TASA_ITBMS;
}

int main() {
    // MÓDULO I: Declaración de variables con tipos de datos adecuados
    string nombreEstudiante;
    float precioProducto;
    int cantidad;

    cout << "--- Sistema de Facturación Simple (Demo Programación II) ---" << endl;

    // Entrada de datos
    cout << "Ingrese su nombre: ";
    getline(cin, nombreEstudiante); // Usamos getline para nombres con espacios

    cout << "Ingrese el precio del producto: ";
    cin >> precioProducto;

    cout << "Ingrese la cantidad: ";
    cin >> cantidad;

    // Cálculos
    float subtotal = precioProducto * cantidad;
    float impuesto = calcularImpuesto(subtotal); // Llamada a la función
    float total = subtotal + impuesto;

    // Salida de datos con formato
    cout << "\n--- Resumen de Compra ---" << endl;
    cout << "Cliente: " << nombreEstudiante << endl;
    cout << "Subtotal: $" << subtotal << endl;
    cout << "ITBMS (7%): $" << impuesto << endl;
    cout << "Total a pagar: $" << total << endl;

    return 0;
}
