#include <iostream>
#include "triangulo.cpp"
#include "circulo.cpp"
#include "trapecio.cpp"
#include "rombo.cpp"
#include "cuadrado.cpp"

int main() {
    double base = 4.0, altura = 8.0, radio = 2.0;
    double baseMayor = 6.0, baseMenor = 4.0, alturaTrapecio = 5.0;
    double diagonalMayor = 6.0, diagonalMenor = 4.0;
    double ladoCuadrado = 3.0;

    std::cout << "Área del triángulo: " << Geometria::calcularAreaTriangulo(base, altura) << std::endl;
    std::cout << "Área del círculo: " << Geometria::calcularAreaCirculo(radio) << std::endl;
    std::cout << "Área del trapecio: " << Geometria::calcularAreaTrapecio(baseMayor, baseMenor, alturaTrapecio) << std::endl;
    std::cout << "Área del rombo: " << Geometria::calcularAreaRombo(diagonalMayor, diagonalMenor) << std::endl;
    std::cout << "Área del cuadrado: " << Geometria::calcularAreaCuadrado(ladoCuadrado) << std::endl;

    return 0;
}
