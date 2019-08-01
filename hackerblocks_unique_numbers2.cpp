#include <bits/stdc++.h>
using namespace std;

int main()
{
	
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test;
    cin>>test;
    while(test--){
    	int n;
    	cin>>n;
    	int arr[n];
    	for(int i=0; i<n; i++){
    		cin>>arr[i];
		}

		int maskno = 0;
		for(int i=0; i<n; i++){
			maskno ^= arr[i]; 
		}
		
		int j = 0;
		int temp = maskno;
		while(temp>0){
			if(temp & 1){
				break;
			}
			j++;
			temp>>1;
		}
		
		int newmask = 1<<j;
		int res = 0;
		
		for(int i=0; i<n; i++){
			if(arr[i] & newmask){
				res ^= arr[i];
			}
		}
		cout<<res<<" "<<(res^maskno)<<endl;
	}
    
    return 0;
}

