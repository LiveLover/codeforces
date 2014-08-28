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

int numbers_less_than(int n, int m, int x){
	int res = 0;
	for (int i=0; i<n; i++){
		res+=x/i;
	}
	return res;
}

int main () {
	int n, m, k;
	cin >> n >> m >> k;

	int l(1), r(n*m);
	int x=(l+r)/2;
	cout << n << m << k;
}


