#include <iostream>

#include <iomanip>

int main() {

    double voltajes[5];

    double promedio;

    // Pedir al usuario que ingrese los 5 voltajes

    std::cout << "Ingrese los 5 voltajes:\n";

    for (int i = 0; i < 5; i++) {

        std::cout << "Voltaje " << i + 1 << ": ";

        std::cin >> voltajes[i];
    }

    // Calcular el promedio de los voltajes

    promedio = 0.0;

    for (int i = 0; i < 5; i++) {

        promedio += voltajes[i];
    }
    promedio /= 5;

    // Mostrar el resultado

    if (promedio > 220) {
        std::cout << "ALTO VOLTAJE. 
        El promedio es: " << std::fixed << std::setprecision(2) << promedio << std::endl;

    } else {

        std::cout << "VOLTAJE CORRECTO. El promedio es: " << std::fixed << std::setprecision(2) << promedio << std::endl;

    }

    std::cin.ignore();
    std::cin.get(); // * Nota
    
    return 0;
}