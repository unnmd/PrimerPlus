/* 2023-11-30
 *
 * Напишите программу на C++, которая использует три определяемых пользователем
 * функции (включаю main()) и генерирует следующий вывод:
 * Three blind mice
 * Three blind mice
 * See how they run
 * See how they run
 * Одна функция, вызываемая два раза, должна генерировать первые две строки, а
 * другая, также вызываемая два раза - оставшиеся строки.
 *
 */

#include <iostream>

void func1() { std::cout << "Three blind mice\n"; }

void func2() { std::cout << "See how they run\n"; }

int main() {
    using namespace std;

    func1();
    func1();
    func2();
    func2();

    return 0;
}
