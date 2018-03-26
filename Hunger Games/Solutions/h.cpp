#include<iostream>

using namespace std;

int main() {
	int w, h;
	cin >> w >> h;
	if (w == h) cout << "Square";
	else cout << "Rectangle";
}