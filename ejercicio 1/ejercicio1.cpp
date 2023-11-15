#include <iostream>
#include <cmath> // Necesario para sqrt

namespace Matematicas {

    int suma(int a, int b) {
        return a + b;
    }

    int resta(int a, int b) {
        return a - b;
    }

    int multiplicacion(int a, int b) {
        return a * b;
    }

    int division(int a, int b) {
        if (b != 0) {
            return a / b;
        } else {
            std::cout << "Error: división por cero." << std::endl;
            return 0; // Podrías manejar este caso de manera diferente, según lo desees.
        }
    }

    double potencia(double base, double exponente) {
        return pow(base, exponente);
    }
    double raizCuadrada(double num) {
        return sqrt(num);
    }
}

int main() {
    int x = 20, y = 10;
    std::cout << "Suma: " << Matematicas::suma(x, y) << std::endl;
    std::cout << "Resta: " << Matematicas::resta(x, y) << std::endl;
    std::cout << "Multiplicación: " << Matematicas::multiplicacion(x, y) << std::endl;
    std::cout << "División: " << Matematicas::division(x, y) << std::endl;

    double base = 2.0, exponente = 8.0;
    std::cout << "Potencia: " << Matematicas::potencia(base, exponente) << std::endl;

    double num = 25.0;
    std::cout << "Raíz cuadrada: " << Matematicas::raizCuadrada(num) << std::endl;

    return 0;
}
