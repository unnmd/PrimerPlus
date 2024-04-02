// hexoct2.cpp -- отображает значения в шеснадцатеричном и восьмеричном форматах

#include <iostream>
int main() {
    using namespace std;
    int chest = 42;  // десятичный целочисленный литерал
    int waist = 42;  // шеснадцатеричный целочисленный литерал
    int inseam = 42;  // восьмеричный целочисленный литерал

    cout << "Minsieur cuts a striking figure!" << endl;
    cout << "chest = " << chest << " (42 in decimal)" << endl;
    cout << hex;
    cout << "waist = " << waist << " (42 in hex)" << endl;
    cout << oct;
    cout << "inseam = " << inseam << " (42 in decimal)" << endl;

    return 0;
}

