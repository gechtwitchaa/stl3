#include <iostream>

namespace Ciencia {
    namespace Fisica {
        const double velocidadLuz = 299792458;

        double calcularEnergia(double masa) {
            return masa * velocidadLuz * velocidadLuz;
        }
    }
}

int main() {
    double masa = 10.0;

    std::cout << "Energía correspondiente a una masa de " << masa << " kg: "
              << Ciencia::Fisica::calcularEnergia(masa) << " Joules" << std::endl;

    return 0;
}
