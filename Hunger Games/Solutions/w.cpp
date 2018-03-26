#include<bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		unsigned long long a, b, c, min;
		cin >> a >> b >> c;
		min = a;
		if (b < min)
			min = b;
		if (c < min)
			min = c;
		
		if (min == a)
			cout << "First" << endl;
		else if (min == b)
			cout << "Second" << endl;
		else if (min == c)
			cout << "Third" << endl;
	}
	return 0;
}