// morechar.cpp -- сравнение типов char и int
#include <iostream>
int main() {
    using namespace std;
    char ch = 'M';
    int i = ch;

    cout << "The ASCII code for " << ch << " is " << i << endl;

    cout << "Add one the character code:" << endl;
    ch = ch + 1;
    i = ch;

    cout << "The ASCII code for " << ch << " is " << i << endl;

    // Использование функции-члена cout.put() для отображения символа
    cout << "Displaying char ch using cout.put(ch): ";
    cout.put(ch);
    // Использование cout.put() для отображения символьной константы
    cout.put('!');
    cout << endl << "Done" << endl;
    return 0;
}
