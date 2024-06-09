#include <iostream>
#include <limits>

int main() {
    int entero;
    double real;

    // Pedir y leer el dato entero
    std::cout << "Ingresar un número entero: ";
    std::cin >> entero;

    // Pedir y leer el dato real
    std::cout << "Ingresar un número real: ";
    std::cin >> real;

    // Mostrar los datos ingresados
    std::cout << "Dato entero ingresado: " << entero << std::endl;
    std::cout << "Dato real ingresado: " << real << std::endl;

    std::cin.ignore();
    std::cin.get(); // * Nota 

    return 0;

}