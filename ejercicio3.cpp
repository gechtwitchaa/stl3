#include <iostream>

namespace Geometria {
    class Circulo {
    private:
        double radio;

    public:
        Circulo(double r) : radio(r) {}

        double calcularArea() {
            return 3.14 * radio * radio;
        }

        double calcularPerimetro() {
            return 2 * 3.14 * radio;
        }
    };
}

int main() {
    double radio = 3.0;
    Geometria::Circulo circulo(radio);

    std::cout << "Área del círculo: " << circulo.calcularArea() << std::endl;
    std::cout << "Perímetro del círculo: " << circulo.calcularPerimetro() << std::endl;

    return 0;
}
