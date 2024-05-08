// problem link
// https://www.codechef.com/START133D/problems/MXALT

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    vector<int> arr(n);

	    for(int i = 0;i < n;i++){
	        cin >> arr[i];
	    }

	    sort(arr.begin(), arr.end());
	    int i = 0, j = n-1;
	    long long int val = 0;

	    while(i < j){
	        val += (arr[j] - arr[i]);
	        i++;
	        j--;
	    }

	    if(i == j){
	        val += arr[i];
	    }

	    cout << val << endl;
	}
	return 0;
}
