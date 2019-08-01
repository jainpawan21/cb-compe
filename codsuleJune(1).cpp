// PJ
#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test;
    cin>>test;
    while(test--)
    {
    	int a,b,x,y;
    	ll n;
    	cin>>a>>b>>n>>x>>y;
    	int arr[a+1][b+1] = {0};
    	ll max;
    	ll min;
    	ll noRound = (n-a*b)/(a*b-b);
    	ll extRound = (n-a*b) % (a*b-b);
    	max = 1+ noRound;
    	min = noRound;
    	if((noRound%2 == 0) && extRound != 0){
    		int temp = extRound ; 
    		for(int i=a-1; temp!=0;i--){
    			for(int j=1; j<=b && temp!=0; j++){
    				arr[i][j]= 1;
    				temp--;
				}
			}
		}
		if((noRound%2 != 0) && extRound != 0){
    		int temp = extRound ; 
    		for(int i=2; temp!=0;i++){
    			for(int j=1; j<=b && temp!=0; j++){
    				arr[i][j]= 1;
    				temp--;
				}
			}
		}
		arr[x+1][y+1] += max;
    	if(extRound != 0){
    		max++;
		}
		cout<<max<<"" <<min<<" "<<arr[x+1][y+1]<<endl;
	}
    
    
    return 0;
}

