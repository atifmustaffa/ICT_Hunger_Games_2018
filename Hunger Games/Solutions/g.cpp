#include<iostream>

using namespace std;

int main() {
	int num;
	bool prime=true;
	cin >> num;
	if (num == 1) {
		cout << "No"; return 0;
	}
    for (int j=2; j*j<=num; j++) {
        if (num % j == 0)  {
            prime=false;
            break;    
        }
    }
    
    if (prime) cout << "Yes";
    else cout << "No";
  	return 0;
}