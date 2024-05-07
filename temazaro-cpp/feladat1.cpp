#include <iostream>
#include <string>

int main() {
    std::string word;
    int number;

    // Szó bekérése
    std::cout << "Kérem, adjon meg egy szót: ";
    std::cin >> word;

    // Egész szám bekérése
    std::cout << "Kérem, adjon meg egy egész számot: ";
    std::cin >> number;

    // Szó megjelenítése a megadott számszor
    for (int i = 0; i < number; ++i) {
        std::cout << word;
        if (i < number - 1) {
            std::cout << " ";
        }
    }

    std::cout << std::endl;

    return 0;
}

