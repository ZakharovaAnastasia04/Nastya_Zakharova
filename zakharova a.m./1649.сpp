#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <array>




int main()
{
	int t;
	std::cin >> t;
	for (int tt = 0; tt < t; tt += 1) {
		int n;
		std::cin >> n;
		std::vector<int> s(n);
		int first = 0, second = 0;
		bool f = 1;
		for (int i = 0; i < n; i += 1) {
			std::cin >> s[i];
			if (s[i] == 0 && f) {
				first = i - 1;
				f = 0;
			}
			}
		for (int i = 0; i<n; i += 1) {
			if (s[n-i-1] == 0) {
				second = n-i;
				break;
			}
		}
			std::cout << second-first<<std::endl;
	}
}
