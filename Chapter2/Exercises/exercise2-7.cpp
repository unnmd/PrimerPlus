/* 2023-12-10
 *
 *  Напишите программу, которая запрашивает у пользователя ввод значения часов и
 *  минут. Затем функция main() должна передать эти два значения в функцию типа
 *  void, которая отобразит два значения в формате, показанном в следующем
 *  примере выполнения:
 *
 *  Enter the number of hours: 9
 *  Enter the number of minutes: 28 
 *  Time: 9:28
 *
*/


#include <iostream>
using namespace std;

void time(int h, int m)
{
    cout << "Time: " << h << ':' << m << '\n';
}

int main()
{
    int h, m;
    cout << "Enter the number of hours: ";
    cin >> h;
    cout << "Enter the number of minutes: ";
    cin >> m;
    time(h,m);
    return 0;
}
