// Напишите программу, которая запрашивает широту в градусах, минутах и
// секундах, после чего отображает широту в десятичном формате. В одной минуте
// 60 угловых секунд, а в одном градусе 60 угловых минут; представте эти
// значиния с помощью символьных констант. Для каждого вводимиого значиния
// должна использоваться отделальная переменная. Результат выпольнения программы
// должен выглядеть следующим образом:
// Enter a latitude in degrees, minutes, and seconds:
// First, enter the degrees: 37
// Next, enter the minutes of arc: 51
// Finally, enter the seconds of arc: 19
// 37 degrees, 51 minutes, 19 seconds = 37.8553 degrees
#include <iostream>
using namespace std;
// Символьные константы для угловых минут и секунд
const int SEC_OF_ARC_TO_MIN{60};
const int MIN_OF_ARC_TO_DEGR{60};
// Прототип функции для расчета широты в десятичном
void calculate_latitude_decimal(int, int, int);
int main() {
    int degrees{}, minutes{}, seconds{};
    // Запрос ввода широты в градусах, минутах и секундах
    cout << "Enter a latitude in degrees, minutes, and seconds: " << endl;
    cout << "First, enter the degrees:__\b\b";
    cin >> degrees;
    cout << "Next, enter the minutes of arc:__\b\b";
    cin >> minutes;
    cout << "Finally, enter the seconds of arc:__\b\b";
    cin >> seconds;
    // Вызов функции для расчета широты в десятичном формате
    calculate_latitude_decimal(degrees, minutes, seconds);
    return 0;
}
// Функция для расчета широты в десятичном формате
void calculate_latitude_decimal(int degrees, int minutes, int seconds) {
    // Общее количество угловых секунд в одном градусе
    int total_arc_seconds = SEC_OF_ARC_TO_MIN * MIN_OF_ARC_TO_DEGR;
    // Перевод минут в секунды
    int minutes_to_seconds = minutes * SEC_OF_ARC_TO_MIN;
    // Расчет десятичной доли градуса
    double fractions =
        double(minutes_to_seconds + seconds) / double(total_arc_seconds);
    // Вывод результата на экран
    cout << degrees << " degrees, " << minutes << " minutes, " << seconds
         << " seconds = " << fractions + degrees << " degrees" << endl;
}
