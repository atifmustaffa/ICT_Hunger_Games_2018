#include<iostream>

using namespace std;

int hammingDistance(int val[], int length) {
	
    int z  = val[0] ^ val[1];
//    cout << "v0 ^ v1 :"<< val[0] << "^" << val[1] << " = " << z << endl;
	int max = 0;
    for (; z > 0; z >>= 1) {
        max += z & 1;
    }
	for (int d = 0; d < length-1; d++) {
		for (int k = d+1; k < length; k++) {
			z = val[d] ^ val[k];
//			cout << val[d] << "^" << val[k] << " = " << z << endl;
			int r = 0;
		    for (; z > 0; z >>= 1) {
		        r += z & 1;
		    }
			if (r > max)
				max = r;
		}
		
	}
    return max;
}
    
int main() {
	int n;
	cin >> n;
	int dist[n];
	for (int i = 0; i < n; i++) {
		int v;
		cin >> v;
		int val[v];
		for (int x = 0; x < v; x++) {
			cin >> val[x];
		}
		dist[i] = hammingDistance(val, v);
	}
	for (int i = 0; i < n; i++) {
		cout << dist[i];
		if (i < n-1)
			cout << endl;
	}
	
	return 0;
}