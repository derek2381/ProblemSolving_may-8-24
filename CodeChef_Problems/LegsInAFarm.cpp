// problem link
// https://www.codechef.com/START133D/problems/FARMLEGS

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n, count = 0;
	    cin >> n;
	    count += (n/4);

	    n -= (4*(n/4));

	    count += (n/2);
	    cout << count << endl;
	}
	return 0;
}
