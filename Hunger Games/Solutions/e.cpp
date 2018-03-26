#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;

int main() {
	const double pi = 3.14159265358979323846;
	double area;
	cin >> area;
	cout << setprecision(9);
	cout << sqrt(area/pi)*2;
	return 0;
}