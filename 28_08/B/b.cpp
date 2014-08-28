#include <iostream>
#include <vector>
#include <fstream>

#define min(a,b) (a<b? a: b)
#define min3(a,b,c) min(a,min(b,c))

using namespace std;

void print_vector(const vector<int> &v) {
	for(auto &i: v)
		cout << i << " ";
	cout << endl;
}

int main () {
	int k, n;
	int a, b, x;
	ifstream cin("in1");
	cin >> n;
	vector<vector<int>> v(n, vector<int>(n));

	for(int i=0; i<n; i++){
		for (int j=0; j<n; ++j){
			cin >> x;
			v[i][j] = x;
		}
	}

	for (auto i: v)
		print_vector(i);
	cin >> k;

	for (int l=0; l<k; ++l)  {
		cin >> a >> b >> x;

		cout << "abx" << a << b << x << endl;
		v[a][b] = min(v[a][b], x);
		for(int i=0; i<n; ++i)
			for(int j=0; j<n; ++j)
				v[i][j] = min3(v[i][j], v[i][a]+v[a][b]+v[b][j], v[i][b]+v[b][a]+v[a][j]);
	
		int res =0;
		for (auto i: v)
			for(auto j: i)
				res += j;
		cout << res << endl;
	}
}
