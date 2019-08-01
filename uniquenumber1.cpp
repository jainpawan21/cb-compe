// PJ
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
    	cin>>arr[i];
	}
	int res = 0;
	for(int i=0; i<n; i++){
		res ^= arr[i];
	}
	cout<<res;
    return 0;
}

