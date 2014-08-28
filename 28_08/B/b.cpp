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

void print_matrix(const vector<vector<int>> &m) {
	for (auto i: m)
		print_vector(i);
}

int main () {
	int k, n;
	int a, b, x;
	ifstream cin("in2");
	cin >> n;
	vector<vector<int>> v(n, vector<int>(n));
	vector<vector<int>> w(n, vector<int>(n));

	for(int i=0; i<n; i++){
		for (int j=0; j<n; ++j){
			cin >> x;
			v[i][j] = x;
		}
	}

    cin >> k;
	for (int l=0; l<k; ++l)  {
		cin >> a >> b >> x;

        a--;
        b--;
		v[a][b] = min(v[a][b], x);
        v[b][a] = v[a][b];
		for(int i=0; i<n; ++i)
			for(int j=0; j<n; ++j)
				w[i][j] = min3(v[i][j], v[i][a]+v[a][b]+v[b][j], v[i][b]+v[b][a]+v[a][j]);
        v=w;
//        print_matrix(v);
 //       cout << "<<<<<<<<" << endl;
	
		int res =0;
		for (auto i: v)
			for(auto j: i)
				res += j;
		cout << res/2 << endl;
	}
}
