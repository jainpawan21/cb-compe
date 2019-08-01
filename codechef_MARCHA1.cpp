#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int test;
	cin>>test;
	while(test--){
		int n, m;
		cin>>n>>m;
		int arr[n];
		for(int i=0; i<n; i++){
			cin>>arr[i];
		}
		int sum;
		int flag = 0;
		int range = pow(2,n) - 1;
		for(int i=1; i<=range; i++){
			sum = 0;
			for(int j=0; j<n; j++){
				if(i & (1<<j)){
					sum = sum + arr[j];
				}
				if(sum == m){
					flag = 1;
				}
			}
			
		}
		if(flag==1){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}    
    
    return 0;
}

