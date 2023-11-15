#include <iostream>
#include "triangulo.cpp"
#include "circulo.cpp"

int main() {
    double base = 4.0, altura = 8.0, radio = 2.0;

    std::cout << "Área del triangulo: " << Geometria::calcularAreaTriangulo(base, altura) << std::endl;
    std::cout << "Área del círculo: " << Geometria::calcularAreaCirculo(radio) << std::endl;

    return 0;
}
