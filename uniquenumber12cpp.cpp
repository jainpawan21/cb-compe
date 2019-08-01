
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;
    int arr[n];
    int temp = 0;
    for(int i=0; i<n; i++){
    	cin>>arr[i];
    	temp ^= arr[i];
	}
	int mask = temp;
	int j=0;
	while(mask>0){
		if(mask & 1){
			break;
		}
		j++;
		temp = temp>>1;
	}
	int res = 1<<j;
	int newmask = 0;
	for(int i=0; i<n; i++){
		if( (res&arr[i]) != 0){
			newmask ^= arr[i];
		}
	}
	cout<<newmask<<" "<<(newmask^res);
    return 0;
}

