#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

#define DP 0
#define div_up(a,b) (a%b? a/b+1: a/b)
/*
S(X-a_i) > X
X(n-1) > S(a_i)

X > S(a_i)/(n-1)
*/

using namespace std;

typedef long long ll;

int main () {
	vector<ll> v;
	int n;
	cin >> n;


	for (int i = 0; i<n; ++i){
		ll t;
		cin >> t;
		v.push_back(t);
	}

	for (auto i : v) 
		cout << i << ",";
	cout << endl;
	ll sum=0;
	for (vector<ll>::iterator it=v.begin(); it != v.end(); ++it) 
		sum+=*it;
	cout << "sum( a_i ) = " << sum << endl;
	
	ll X;
	X = div_up(sum, n-1);
	cout << "X = "  << X << endl;
	v.push_back(X);

	vector<ll>::iterator max = max_element(v.begin(), v.end());
	cout << *max << endl;
}


