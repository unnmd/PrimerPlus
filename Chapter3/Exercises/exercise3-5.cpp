// Напишите программу, которая запрашивает текущую численность населения Земли и
// текущую численность населения США (или любой другой страны). Сохраните эту
// информацию в переменных типа long long. В качестве результата программа
// должна отображать процентное соотношение численности населения США (или
// выбранной страны) и все мира. Результат выполнения программы должен выглядеть
// следующим образом:
//  Enter the world's population: 6898758899
//  Enter the population of the US: 310783781
//  The population of the US is 4.50492% of the world population.
//  Можете поискать в Интeрнете более точные значения.
#include <iostream>
using namespace std;
int main() {
    // Формат с фиксированной точкой
    cout.setf(ios_base::fixed, ios_base::floatfield);
    long long population{0}, country_population{0};
    // Запрос ввода
    cout << "Enter the world's population: ";
    cin >> population;
    cout << "Enter the population of the US: ";
    cin >> country_population;
    // Рассчет процентного соотношения численности населения
    long long remainder = population - country_population;
    double percent = 100 - (((double)remainder / (double)population) * 100);
    // Вывод результата
    cout << "The population of the US is " << percent
         << "% of the world population.\n";
    return 0;
}
