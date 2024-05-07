#include <iostream>
#include <string>

int main() {
    std::string name;
    int maxPoints, achievedPoints;

    // Adatok bekérése
    std::cout << "Kérem, adja meg a nevet: ";
    std::getline(std::cin, name);

    std::cout << "Kérem, adja meg a maximálisan elérhető pontszámot: ";
    std::cin >> maxPoints;

    std::cout << "Kérem, adja meg az elért pontszámot: ";
    std::cin >> achievedPoints;

    // Hibakezelés: elért pontszám magasabb, mint a maximális pontszám
    if (achievedPoints > maxPoints) {
        std::cout << "Hiba: Az elért pontszám nem lehet magasabb, mint a maximálisan elérhető pontszám." << std::endl;
        return 1; // Kilépés a programból hibakód 1-gyel
    }

    // Százalék kiszámítása
    double percentage = (static_cast<double>(achievedPoints) / maxPoints) * 100;

    // Osztályzat meghatározása
    std::string grade;
    if (percentage < 51) {
        grade = "elégtelen";
    } else if (percentage >= 51 && percentage < 65) {
        grade = "elégséges";
    } else if (percentage >= 65 && percentage < 77) {
        grade = "közepes";
    } else if (percentage >= 77 && percentage < 90) {
        grade = "jó";
    } else {
        grade = "jeles";
    }

    // Eredmény kiírása
    std::cout << "Az elért eredmény: " << percentage << "%, osztályzat: " << grade << std::endl;

    return 0;
}

