// modulus.cpp -- использует операцию % для преобразования фунтов в стоуны
#include <iostream>
int main() {
    using namespace std;
    const int Lsb_per_stn = 14;
    int lsb;

    cout << "Enter your weight in pounds: ";
    cin >> lsb;
    int stone = lsb / Lsb_per_stn;
    int pounds = lsb % Lsb_per_stn;
    cout << lsb << " pounds are " << stone << " stone,  " << pounds
         << " pound(s).\n";
    return 0;
}
