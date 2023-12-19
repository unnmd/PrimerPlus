/* 2023-12-01
 *
 * Напишите программу, в которой функция main() вызывает определяемую
 * пользователем функцию, принимающую в качестве аргумента расстояние в световых
 * годах и возвращающую расстояние в астрономических единицах. Программа должна
 * выдать запрос на ввод значения в световых годах и отобразить следующий
 * результат:
 * Enter the number of light years: 4.2
 * 4.2 light years = 265608 astronomical units
 * Астрономическая единица равна среднему расстоянию Земли от Солнца (около
 * 150 000 000 км, или 93 000 000 миль), а световой год соответствует
 * расстоянию, пройденному лучом света за один земной год (примерно 10
 * триллионов километров, или 6 триллионов миль). (Ближайшая звезда после Солнца
 * находится на расстоянии 4,2 световых года) Используйте тип double (как в
 * листинге 2.4) и следующий коэффициент преобразования :
 *
 *      1 световой год = 63 240 астрономических единиц
 *
 */

#include <iostream>

double lightYearsToAstonomicalUnits(double lightYear) {
    double astronimicalUnits = lightYear * 63240;
    return astronimicalUnits;
}

int main() {
    using namespace std;
    double lightYear;
    cout << "Enter the light years: ";
    cin >> lightYear;
    cout << lightYear
         << " light years = " << lightYearsToAstonomicalUnits(lightYear)
         << " astronomical units\n";
    return 0;
}
