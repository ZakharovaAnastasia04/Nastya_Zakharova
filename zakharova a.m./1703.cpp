#include <iostream>
#include <string>
 
int main() {
  int t = 0;          // число наборов
  std::cin >> t;
  std::string code; // код
  code.reserve(100);
  int n = 0;
  int b = 0;
  std::string s;
  for (int iSet = 0; iSet < t; iSet += 1) {
    std::cin >> n;
    code.resize(n);
    for (int iNumber = 0; iNumber < n; iNumber += 1) {
      std::cin >> code[iNumber];
    }
    for (int iLine = 0; iLine < n; iLine += 1) {
      std::cin >> b >> s;
      for (int iCh = 0; iCh < b; iCh += 1) {
        char& ch = code[iLine];
        if ('U' == s[iCh]) {
           ch = '0' == ch ? '9' : ch - 1;
        } else if ('D' == s[iCh]) {
          ch = '9' == ch ? '0' : ch + 1;
        }
      }
    }
    for (int iCh = 0; iCh < code.length(); iCh += 1) {
      std::cout << code[iCh] << ' ';
    }
    std::cout << '\n';
  }
}
