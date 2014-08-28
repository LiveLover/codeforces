#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

#define DP 0

using namespace std;

int f(int n, int k) {
	while(!n%k)
		n/=k;
	return n;
}

int main () {
	vector<int> v;
	int k, n;
	if(DP){
		cout << "n = " << n << endl;
		cout << "k = " << k << endl;
	}
	cin >> n;
	cin >> k;


	for (int i = 0; i<n; ++i){
		int t;
		cin >> t;
		v.push_back(t);
	}

	sort (v.begin(), v.end());
	if(DP){for (auto i: v) {
		cout <<  i<< endl;
	}}

	set<int> s;
	for (auto i: v) {
		if(i%k) {
			s.insert(i);
		}
		else{
			int t=i/k;
			if(s.find(t) == s.end())
				s.insert(i);
		}
	}

	if(DP){for (auto i: s) 
		cout << "s: " << i << endl;
	}
	cout << s.size() << endl;
}


