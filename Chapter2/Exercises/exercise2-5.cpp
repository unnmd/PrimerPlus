/* 2023-12-01
 *
 * Напишите программу, в которой функция main() вызывает определяемую
 * пользователем функцию, принимающую в качестве аргумента значение температуры
 * по Цельсию и возвращающую эквивалентное значение температуры по Фаренгейту.
 * Программа должна задавать запрос на ввод значения по Цельсию и отобразить
 * следующий результат:
 * Please enter a Celsius value: 20
 * 20 degrees Celsius is 68 degrees Fahrenheit
 *
 */

#include <iostream>

double fahrenheit(double x) {
    double f = 1.8 * x + 32;
    return f;
}

int main() {
    using namespace std;
    int c;
    cout << "Please enter a Celsius value: ";
    cin >> c;
    cout << c << " degrees Celsius is " << fahrenheit(c)
         << " degrees Fahrenheit\n";

    return 0;
}
