#include <iostream>

int main () {

    double voltage = 120;  // voltaje de cada bombillo en voltios
    double kilovoltage;  // voltaje en kilovoltios

    std::cout << "Voltaje de cada bombillo: " << voltage << " voltios" << std::endl;

    kilovoltage = voltage / 1000; // convertir a kilovoltios

    std::cout << "Voltaje total de los tres bombillos: " << 3 * kilovoltage << " kilovoltios" << std::endl;

    std::cin.ignore();
    std::cin.get(); // * Notas

    return 0;

}