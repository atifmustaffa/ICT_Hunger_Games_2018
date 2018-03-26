#include<iostream>

using namespace std;

bool getRes(string str) {
	int count = 0;
	for (int i = 0; i < str.size(); i++)
		if (str[i] == 'M') count++;
	
	if(count == 0 || count == 3 || count == 4 || count == 6 || count == 7 || count == 10)
		return true;
	else
		return false;
}

int main() {
	int n;
	cin >> n;
	string str[n];
	for (int i = 0; i < n; i++)
		cin >> str[i];
		
	for (int i = 0; i < n; i++) {
		if(getRes(str[i]))
			cout << "Yes";
		else
			cout << "No";
		
		if (i < n-1)
			cout << endl;
	}
	return 0;

}
