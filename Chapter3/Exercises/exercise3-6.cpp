// Напишите программу, которая запрашивает количиство миль, пройденных
// автомобилем, и количество галлонов израсходованного бензина, а затем сообщает
// значение количества миль на галлон. Или, если хотите, программа может
// запрашивать расстояние в киллометрах, а объем бензина в литрах, и выдавать
// результат в виде количества литров на 100 киллометров.
#include <iostream>
using namespace std;
int main() {
    int amount_of_gasoline{0}, distance_in_kilometers{0};
    cout << "Введите количество киллометров, пройденных автомобилем: ";
    cin >> distance_in_kilometers;
    cout << "Введите литров израсходованного бензин:  ";
    cin >> amount_of_gasoline;
    double liters_per_100_km =
        ((double)amount_of_gasoline / (double)distance_in_kilometers) * 100;
    cout << "Израсхованно " << liters_per_100_km
         << " литров бензина на 100 киллометров.\n";
    return 0;
}

