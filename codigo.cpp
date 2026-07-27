#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    

    double sueldo = 0.0;
    double isr = 0.0;

    cout << "Ingrese el sueldo mensual (RD$): ";
    cin >> sueldo;

    // Validación básica
    if (sueldo <= 0) {
        cout << "Error: El sueldo debe ser mayor a cero." << endl;
        return 1;
    }

    // Cálculo directo usando la escala mensual de la DGII
    if (sueldo <= 34685.00) {
        isr = 0.0;
    }
    else if (sueldo > 34685.00 && sueldo <= 52027.42) {
        isr = (sueldo - 34685.01) * 0.15;
    }
    else if (sueldo > 52027.42 && sueldo <= 72260.25) {
        isr = 2601.33 + ((sueldo - 52027.43) * 0.20);
    }
    else {
        isr = 6648.00 + ((sueldo - 72260.26) * 0.25);
    }

    // Mostrar resultados
    cout << "\n--- RESULTADOS ---" << endl;
    cout << "Sueldo: RD$ " << sueldo << endl;

    if (isr > 0) {
        cout << "Descuento ISR: RD$ " << isr << endl;
    }
    else {
        cout << "Descuento ISR: 0" << endl;
    }

    return 0;
}
