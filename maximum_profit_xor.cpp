// PJ
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b;
    cin>>a>>b;
    int max = 0;
    for(int i=a; i<=b; i++ ){
    	for(int j=a; j<=b; j++){
    		if(max< (i^j))
    		{
    			max = i^j;
			}
		}
	}
	cout<<max;
    
    
    return 0;
}

