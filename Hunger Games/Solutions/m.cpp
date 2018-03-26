#include<iostream>

using namespace std;

int main() {
	int days;
	cin >> days;
	int weight[days], cost[days];
	for (int i = 0; i < days; i++) {
		cin >> weight[i] >> cost[i];
	}
	int min = cost[0];
	int indexMin = 0;
	int total = weight[0]*min;
	for (int i = 1; i < days; i++) {
		if (cost[i] > min) {
			total += weight[i]*min;
		}
		else {
			total += weight[i]*cost[i];
			min = cost[i];
		}
	}
	
	cout << total;
	return 0;
}