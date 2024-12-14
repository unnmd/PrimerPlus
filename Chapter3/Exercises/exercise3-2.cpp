// Напишите короткую программу, которая запрашивает рост в футах и дюймах и вес
// в фунтах. (Для хранения данной информации используйте три переменных.)
// Программа должна выдать индекс массы тела (body mass index - BMI). Чтобы
// рассчитать BMI, сначала преобразуйте рост в футах и дюймах в рост дюймах (1
// фут = 12 дюймов). Затем преобразуйте рост в дюймах в рост в метрах, умножив
// на 0.0254. Далее преобразуйте вес в фунтах в массу в килограммах, разделив на
// 2.2. После рассчитайте BMI, разделив массу в килограммах на квадрат роста в
// метрах. Для представления различных коэффициентов преобразования используйте
// символические константы.
#include <iostream>
using namespace std;
// Прототип функции расчета BMI
void calculateBMI(double, double);

int main() {
    // Символьные константы
    const int FEET_PER_INCHES{12};
    const double INCHES_PER_METR{0.0254};
    const double POUNDS_PER_KILOGRAMS(2.2);
    // Инициализация переменных для хранения роста и веса
    int feet{}, inches{}, pounds{};
    // Запрос ввода
    cout << "Введите цифрами через пробел три значения, рост в футах и дюймах "
            "и вес в фунтах: ";
    cin >> feet >> inches >> pounds;
    // Приобразование роста в футах и дюймах в рост дюймах
    int height_in_inches = feet * FEET_PER_INCHES;
    height_in_inches = height_in_inches + inches;
    // Преобразование роста в дюймах в рост в метрах
    double height_in_metrs = height_in_inches * INCHES_PER_METR;
    // Преобразование веса в фунтах в массу в килограммах
    double weight_in_kilograms = pounds / POUNDS_PER_KILOGRAMS;
    // Вызов функции расчета BMI
    calculateBMI(height_in_metrs, weight_in_kilograms);
    return 0;
}
// Функция для рассчета и вывода индекса массы тела (BMI)
void calculateBMI(double height, double weight) {
    cout << "Индекс массы тела равен: " << weight / (height * height) << endl;
}

