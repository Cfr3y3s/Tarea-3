#include <iostream>

int main() {

    int numero;

    // Pedir al usuario que ingrese un número

    std::cout << "Ingrese un número: ";

    std::cin >> numero;

    // Verificar si el número es positivo o negativo

    if (numero > 0) {

        std::cout << "El número " << numero << " es positivo." << std::endl;

    } else if (numero < 0) {

        std::cout << "El número " << numero << " es negativo." << std::endl;

    } else {

        std::cout << "El número ingresado es cero." << std::endl;

        std::cin.ignore();
        std::cin.get(); // * Nota
        
    }

    return 0;
}