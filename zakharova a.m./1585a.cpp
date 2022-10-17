#include <iostream>;

using namespace std;

int main()
{
setlocale(LC_ALL, "rus");
system("color 0A");
cout << "Введите число N ";
int n;
cin >> n;
long long p = 1;
for (unsigned u = 1; u <= n; ++u)
{
p *= u;
}
for (;;)
{
if (p % 10 != 0)
{
n = p % 10;
break;
}
p = p / 10;
}
cout << "Последняя цифра не равная нулю факториала числа n = " << n;
cin.get(); cin.get();
}
