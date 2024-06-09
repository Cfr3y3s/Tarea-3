#include <iostream>

using namespace std;

int main() {

    int edad;

    // Pedir la edad

    cout << "Introduzca su edad: ";
    cin >> edad;

    // Mostrar la edad ingresada

    cout << "Su edad es: " << edad << endl;

    std::cin.ignore();
    std::cin.get(); // * Nota
    
    return 0;
}