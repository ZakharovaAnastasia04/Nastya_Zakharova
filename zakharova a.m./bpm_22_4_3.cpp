#include <iostream>
#include <vector>
#include <string>
#include<algorithm>
#include <map>
//— стандартный шаблонный класс библиотеки языка программирования C++, предназначенный для реализации абстракции отображения в виде упорядоченного ассоциативного контейнера
#include <set>
//Класс set контейнера стандартной библиотеки C++ используется для хранения и извлечения данных из коллекции.
#include <cmath>
#include <queue>
#include <fstream>

int main()
{
    std::string s1;
    std::string s2;
    std::cin >> s1 >> s2;

    int d1 = s1.size() - 1;
    int d2 = s2.size() - 1;
    int d = std::min(d1, d2);


    std::reverse(s1.begin(), s1.end());
    std::reverse(s2.begin(), s2.end());
// это операция, которая инвертирует порядок символов в строке
    int k = 0;
    for (int i = 0; i <= d; i++) {
        if (s1.at(i) == s2.at(i)) {
            k++;
//() функция вектора используется для доступа к элементу конкретного положения, которое существует в векторе
        }
        else {
            break;
        }
    }

    std::cout << s1.size() + s2.size() - (k) * 2 << "\n";

}
