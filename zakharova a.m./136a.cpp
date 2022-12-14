#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

int main()
{
    int n, i, g[100], g1[100];
    string str, str2;
    vector<string> vec;
    
//Ввод данных
    std::cout << "Input number of guests (1<=n<=100), n = "; //Выводим строку с приглашением ввести количество гостей
    std::cin >> n; //Веденное количество гостей заносим в переменную n
    cout << "Input nambers throughout backspace => "; // Выводим строку с приглашением ввести n чисел (равно количеству гостей) от 1 до n в произвольном порядке разделенных пробелом
    std::cin.get(); //Ждем ввода символов до нажатия клавиши Enter
    getline(std::cin, str); // Заносим введенную строку в переменную str

// Обработка данных
// Выделяем из введенной строки числовые символы, преобразуем их в числа и записываем в целочисленный массив чисел g[] сохраняя последовательность их ввода
    i=0; //Задаем начальное значение счетчика
    std::stringstream ss(str); //Из строки str формируем поток с именем ss
    while (std::getline(ss, str2, ' ')) //Читаем сивмолы из входного потока ss и заносим подстроки разделенные пробелом в переменную str2
    {
        g[i] = stoi(str2);//Преобразуем строку str2 в число и заносим его в массив g[] соблюдая введенную последовательность
        i++; //Увеличиваем значение счетчика
    }
//Формируем результирующий массив чисел g1[] из значей массива g[]
    for (i=0; i<n; i++)
    { 
        g1[g[i]-1] = i+1;//В качестве номера члена массива g1[] берем текущее значение массима g[]-1 (т.к. нумерация идет с 0), а вкачестве значения - его номер  в массиве g[]+1 (т.к. нумерация идет с 0)
    }
//Вывод результата
//Выводим последовательно числа из массива g1[] разделяя их пробелом

   for (i=0; i<n; i++) {    cout << g1[i] << " "; }
    
}
