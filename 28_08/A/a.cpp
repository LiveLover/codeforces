#include <iostream>


using namespace std;


int main () {
	int n, res=0;
	cin >> n;
	
	for(int i=0; i<n; i++){
		res+=(i+1)*(n-i-1)+1;
	}
	cout << res << endl;
}
