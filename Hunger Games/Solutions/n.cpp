#include<iostream>
#include<string>

using namespace std;

int main() {
	int testcase;
	cin >> testcase;
	string output = "";
	for (int i = 0; i < testcase; i++) {
		unsigned short n;
		cin >> n;
		int max_x, min_x, max_y, min_y;
		for (unsigned short j = 0; j < n*4; j++) {
			short x, y;
			cin >> x >> y;
			if (j == 0) {
				max_x = x, min_x = x, max_y = y, min_y = y;
			}
			else {
				// check x
				if (x > max_x)
					max_x = x;
				else if (x < min_x)
					min_x = x;
				// check y
				if (y > max_y)
					max_y = y;
				else if (y < min_y)
					min_y = y;
			}
		}
		int lengthx = (max_x-min_x);
		int lengthy = (max_y-min_y);
		output += to_string(lengthx*lengthy);
		if (i < testcase-1)
			output += '\n';
		
	}
	cout << output;
	return 0;
}