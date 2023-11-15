#include <iostream>

namespace Matematicas {


    int suma(int a, int b) {
        return a + b;
    }

    int resta(int a, int b) {
        return a - b;
    }
}

int main() {
    int x = 20, y = 10;
    std::cout << "Suma: " << Matematicas::suma(x, y) << std::endl;
    std::cout << "Resta: " << Matematicas::resta(x, y) << std::endl;
    return 0;
}
