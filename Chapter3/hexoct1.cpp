// hexoct1.cpp -- показывает шестнадцатеричные и восьмеричные литералы

#include <iostream>
int main() {
    using namespace std;
    int chest = 42;  // десятичный целочисленный литерал
    int waist = 0x42;  // шеснадцатеричный целочисленный литерал
    int inseam = 042;  // восьмеричный целочисленный литерал

    cout << "Minsieur cuts a striking figure!\n";
    cout << "chest = " << chest << " (42 in decimal)\n";
    cout << "waist = " << waist << " (42 in hex)\n";
    cout << "inseam = " << inseam << " (42 in decimal)\n";

    return 0;
}

