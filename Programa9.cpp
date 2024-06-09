#include <iostream>

int main() {

    int numero;

    // Pedir al usuario que ingrese un número

    std::cout << "Ingrese un número: ";
    std::cin >> numero;

    // Verificar si el número es par o impar

    if (numero % 2 == 0) {

        std::cout << "El número " << numero << " es par." << std::endl;

    } else {

        std::cout << "El número " << numero << " es impar." << std::endl;

    }

    std::cin.ignore();
    std::cin.get();

    return 0;
    
}