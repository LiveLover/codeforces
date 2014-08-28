#include <iostream>
#include <vector>
#include <string>

using namespace std;
#define N 26
#define MAX 1000000
//#define MAX 0

int main () {
	string a, b;
	getline(cin, a);
	getline(cin, b);

	int w[N][N];
	for (int i=0; i<N; ++i)
		for(int j=0; j<N; ++j)
			w[i][j] = MAX;

	char i, j;
	int n;

	int kolvo;
	cin >> kolvo;
	
	cout << kolvo << endl;
	for (int c=0; c<kolvo; ++c){
		cin >> i >> j >> n;
	//	cout << "ijn = " << i << j << n << endl;
		w[i-'a'][j-'a']=n;
	}

/*	for (int i=0; i<N; ++i) {
		for(int j=0; j<N; ++j)
			cout << w[i][j] << " ";
		cout << endl;
	}
*/


	return 0;
}
