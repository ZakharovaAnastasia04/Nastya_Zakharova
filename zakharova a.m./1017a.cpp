#include <iostream>
#include <string>

using namespace std;
int main() {
	int n, a, b, c, d, sum, p, ct=0;
	cin >> n;
	cin >> a >> b >> c >> d;
	p = a + b + c  + d ;
	for (int i = 2; i <= n; i++) {
		cin >> a>>b>>c>>d;
		sum = a + b + c + d;
		if (sum > p)  
            ct++;
	}
	cout << ct + 1;
}
