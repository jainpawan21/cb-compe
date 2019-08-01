// PJ
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
    	long long n;
    	cin>>n;
    	long long count = 0;
    	for(long long i = 2; i<=n; i++){
    		if(i%2 || i%3 || i%5 || i%7 || i%11 || i%13 || i%17 || i%19){
    			count++;
			}
		}
		cout<<count<<endl;
    	
    	
	}
    
    
    return 0;
}

