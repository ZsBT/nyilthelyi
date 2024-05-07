#include <iostream>
#include <cmath>

bool isTriangle(int a, int b, int c) {
    return (a + b > c) && (a + c > b) && (b + c > a);
}

double calculateArea(int a, int b, int c) {
    double s = (a + b + c) / 2.0; // Félkerület
    return sqrt(s * (s - a) * (s - b) * (s - c)); // Héron-képlet
}

int main() {
    int a, b, c;

    // Három egész szám bekérése
    std::cout << "Kérem, adjon meg három egész számot (az oldalhosszakat): ";
    std::cin >> a >> b >> c;

    // Háromszög szerkeszthetőségének ellenőrzése
    if (isTriangle(a, b, c)) {
        std::cout << "A megadott számokkal szerkeszthető háromszög szerkeszthető." << std::endl;

        // Háromszög területének kiszámítása és kiírása
        double area = calculateArea(a, b, c);
        std::cout << "A háromszög területe: " << area << std::endl;
    } else {
        std::cout << "A megadott számokkal nem lehet szerkeszteni háromszöget." << std::endl;
    }

    return 0;
}
