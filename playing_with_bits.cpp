// PJ
#include <bits/stdc++.h>
using namespace std;
int countSetBits( int n){ 
	int count = 0; 
	while (n) 
	{ 
	    count += n & 1; 
	    n >>= 1; 
	} 
	return count; 
} 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int q;
    cin>>q;
    
    while(q--){
    	int a, b;
    	int count = 0;
    	cin>>a>>b;
    	for(int i=a; i<=b; i++){
    		if(a==b){
    			count = countSetBits(a);
    			break;
			}
			else{
				count += countSetBits(i);
			}
			
		}
		cout<<count<<endl;
	}
    
    
    return 0;
}

