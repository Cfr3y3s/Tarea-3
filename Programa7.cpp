#include <iostream>

using namespace std;

int main() {

    double num1, num2, num3, promedio;

    // Pedir los tres números

    std::cout << "Introduzca el primer número: ";
    std::cin >> num1;

    std::cout << "Introduzca el segundo número: ";
    std::cin >> num2;

    std::cout << "Introduzca el tercer número: ";
    std::cin >> num3;

    // Calcular el promedio

    promedio = (num1 + num2 + num3) / 3.0;

    // Mostrar el mensaje según el promedio

    if (promedio > 7) {

        std::cout << "APROBADO" << endl;

    } else {

        std::cout << "MEJORE LA NOTA" << endl;

    }

    std::cin.ignore();
    std::cin.get(); // * Nota

    return 0;
}