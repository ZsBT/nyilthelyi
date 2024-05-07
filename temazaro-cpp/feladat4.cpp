#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>

int generateTwoDigitNumber() {
    return rand() % 90 + 10; // Véletlen kétjegyű szám generálása
}

int main() {
    int correctGuesses = 0;

    // Véletlenszám generátor inicializálása
    srand(time(NULL));

    for (int i = 0; i < 5; ++i) {
        // Két véletlen kétjegyű szám generálása
        int num1 = generateTwoDigitNumber();
        int num2 = generateTwoDigitNumber();

        // Számok összeadása és különbségek abszolút értéke
        int total = num1 + num2;
        int difference = abs(num1 - num2);

        std::cout << "A két szám: " << num1 << ", " << num2 << std::endl;
        std::cout << "A számok összege: " << total << ", különbségük abszolút értéke: " << difference << std::endl;

        // Felhasználó tippje
        std::cout << "Tippelje meg a két számot szóközzel elválasztva (pl.: 42 56): ";
        int guess1, guess2;
        std::cin >> guess1 >> guess2;

        // Tipp helyességének ellenőrzése
        if (std::min(guess1, guess2) == num1 && std::max(guess1, guess2) == num2) {
            std::cout << "Gratulálok, helyes tipp!" << std::endl;
            correctGuesses++;
        } else {
            std::cout << "Sajnos nem találta el a számokat." << std::endl;
        }
    }

    std::cout << "A felhasználónak " << correctGuesses << " alkalommal sikerült eltalálnia a két számot." << std::endl;

    return 0;
}
