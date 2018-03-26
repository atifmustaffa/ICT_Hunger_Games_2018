#include<iostream>
#include<cmath>
#include<string>
#include<bitset>
#include<limits>

using namespace std;

bool isPrime(unsigned int n) { // Decimal
	int i;
	
	for(i = 2; i <= n / 2; ++i) {
		if(n % i == 0) {
			return false;
			break;
		}
	}
	return true;
}

bool isPalindrome(string n) {
	if (n == string(n.rbegin(), n.rend()))
    	return true;
    else
    	return false;
}

string dec2bin(unsigned int n) {
	string bin = "";
	const size_t eee = to_string(n).length();
	bin = bitset<std::numeric_limits<unsigned int>::digits>(n).to_string();
	return bin.substr(bin.find('1'));
}

unsigned int bin2dec(string str) {
    unsigned int dec = 0;
    for(int i=0; i < str.length(); i++) {
        if(str[str.length()-1-i] == '1') {
            dec += pow(2, i);
        }
    }
    return dec;
}

int main() {
	string b;
	while (true) {
//		cin >> b;
		getline(cin, b);
		if (b.empty())
			break;
		if (isPrime(bin2dec(b)) && isPalindrome(b)) {
			cout << b << endl;
		}
		else {
			for (unsigned int x = bin2dec(b)+1; x > 0; x++) {
				string new_b = dec2bin(x);
				if (isPrime(x) && isPalindrome(new_b)) {
					cout << new_b << endl;
					break;
				}
			}
		}
	}
	return 0;
}