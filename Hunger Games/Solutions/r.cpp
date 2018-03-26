#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
int t,n,a[3005];
char MAP[50][3005];

int main(){
	
	cin >> t;
	while(t > 0){
		cin >> n;
		char map[3][n*3];
		for (int x = 0; x < 3; x++) {
			for (int y = 0; y < n*3; y++) {
				cin >> map[x][y];
			}
		}
		int max[n];
		for (int h = 0; h < n; h++)
			max[h] = 0;
		
		for (int x = 0; x < 3; x++) {
			for (int y = 0; y < n*3; y++) {
				int district = floor(y/3);
				if (map[x][y] == '*') {
					max[district] += 4;
				}
				
			}
		}
		int finalMax = max[0];
		for (int h = 0; h < n; h++) {
			if (max[h] > finalMax)
				finalMax = max[h];
		}
		cout << finalMax << endl;
		t--;
	}
		
	return 0;
}