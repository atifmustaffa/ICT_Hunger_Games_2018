#include<iostream>

using namespace std;

int main()
{
	int T;
	cin>>T;
	int x,y;
	while(T--)
	{
		cin >> x >> y;
		x = max(x, y);
		cout << (x*x) << endl;
	}
    return 0;
}