#include <iostream>

#include <cmath>

int main() {

    double monto;

    double descuento;

    // Pedir el monto

    std::cout << "Ingrese el monto: ";
    std::cin >> monto;

    // Calcular el descuento
    if (monto > 10000) {
        
        descuento = monto * 0.2;

    } else {

        descuento = monto * 0.1;

        std::cout << "El descuento es: " << descuento << std::endl;

        std::cin.ignore();
        std::cin.get(); // * Nota

        return 0;

    }
}