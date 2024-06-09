#include <iostream>

#include <cmath>

using namespace std;

int main () {

    double radio, area;

    // Pedir el radio del circulo

    std::cout << "Introduzca el radio del circulo: ";
    std::cin >> radio;

    // Calcular el area del circulo
    area = M_PI * pow(radio, 2);

    // Comprobar si el area es mayor a 5000
    if (area > 5000) {
        std::cout << "DATOS ERRONEOS: El area del circulo no puede ser mayor a 5000." << endl;

    }else {

        std::cout << "El area del circulo es: " << area << " unidades cuadradas. " << endl;

    }

    std::cin.ignore();
    std::cin.get(); // * Notas

    return 0;

}