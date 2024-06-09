#include <iostream>

using namespace std;

int main() {

    double salary = 0; // Sueldo del trabajador

    double discount = 0; // Descuento

    double netSalary = 0; // Sueldo neto

    // Entrada del sueldo del trabajador
    std::cout << "Ingrese el sueldo del trabajador: ";
    std::cin >> salary;

    // Calcular descuento
    if (salary <= 1000) {

        discount = salary * 0.10;

    } else if (salary > 1000 && salary <= 2000) {

        discount = (salary - 1000) * 0.05 + 100;
    } else {

        discount = (salary - 2000) * 0.03 + 150;

    }

    // Calcular sueldo neto
    netSalary = salary - discount;

    // Mostrar resultados
    std::cout << "Descuento: $" << discount << endl;
    std::cout << "Sueldo neto: $" << netSalary << endl;

    std::cin.ignore();
    std::cin.get(); // *Nota
    
    return 0;

}