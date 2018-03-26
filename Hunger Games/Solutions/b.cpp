#include<iostream>

using namespace std;

int main() {
	string s;
	cin >> s;
	if (s.find("game") != -1)
		cout << "Yes";
	else
		cout << "No";
	return 0;
}