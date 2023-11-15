#include <iostream>
#include "triangulo.cpp"
#include "circulo.cpp"

int main() {
    double base = 5.0, altura = 8.0, radio = 3.0;

    std::cout << "Área del triángulo: " << Geometria::calcularAreaTriangulo(base, altura) << std::endl;
    std::cout << "Área del círculo: " << Geometria::calcularAreaCirculo(radio) << std::endl;

    return 0;
}
