#include <iostream>
#include <vector>
#include <map>
#include <set>

int main() {

    std::vector<int> miVector = {1, 2, 3, 4, 5};
    miVector.push_back(6);

        std::map<int, std::string> miMapa;
        miMapa[1] = "Uno";
        miMapa[2] = "Dos";
        miMapa[3] = "Tres";


        std::set<std::string> miSet = {"Manzana", "Banana", "Cereza"};
        miSet.insert("Damasco");

   
    std::cout << "Contenido del vector:" << std::endl;
    for (int num : miVector) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    std::cout << "Contenido del mapa:" << std::endl;
    for (const auto& pair : miMapa) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    std::cout << "Contenido del set:" << std::endl;
    for (const auto& fruta : miSet) {
        std::cout << fruta << std::endl;
    }

    return 0;
}

