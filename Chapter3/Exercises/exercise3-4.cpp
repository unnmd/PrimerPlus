// Напишите программу, которая запрашивает количество секунд в виде целого
// знания (используйте тип long или long long, если последний доступен) и затем
// отражает эквивалентное значение в сутках, часах, минутах и секундах. Для
// представления количества часов в сутках, количества минут в часе и количества
// секунд в минуте используйте символические константы. Результат выполнения
// программы должен выглядеть следующим образом:
// Enter the number of seconds: 31600000
// 31600000 seconds = 365 day, 17  hours, 46 minutes, 40 seconds
#include <iostream>
using namespace std;
// Символические константы
const int SECOND_IN_MINUTE{60};
const int SECOND_IN_HOUR{3600};
const int HOURS_IN_DAY{24};

int main() {
    long long total_seconds{};
    // Запрос ввода в секундах
    cout << "Enter the number of seconds: ";
    cin >> total_seconds;
    // Расчет количества дней
    long days = total_seconds / (HOURS_IN_DAY * SECOND_IN_HOUR);
    // Расчет остатка, чтобы найти оставшиеся дни
    long remaining_seconds = total_seconds % (HOURS_IN_DAY * SECOND_IN_HOUR);
    // Расчет количества часов
    int hours = remaining_seconds / SECOND_IN_HOUR;
    // Расчет остатка, чтобы найти оставшиеся минуты
    remaining_seconds %= SECOND_IN_HOUR;
    // Расчет количества минут
    int minutes = remaining_seconds / SECOND_IN_MINUTE;
    // Расчет количества секунд
    int seconds = remaining_seconds % SECOND_IN_MINUTE;
    // Вывод результата на экран
    cout << total_seconds << " seconds = " << days << " day, " << hours
         << " hours, " << minutes << " minutes, " << seconds << " seconds"
         << endl;
    return 0;
}

