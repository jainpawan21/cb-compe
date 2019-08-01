// PJ
#include <bits/stdc++.h>
typedef long long int ll;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    multiset<ll> li;
	ll n,k;
	cin>>n>>k;
	while(n--){
		char ch;
		cin>>ch;
		if(ch=='1'){
			ll x,y;
			cin>>x>>y;
			if(x<0) x=-x;
			if(y<0) y=-y;
			ll distorigin = x*x + y*y;
			li.insert(distorigin);
		}
		else
		{
			multiset<ll> :: iterator it = li.begin();
			advance(it,k-1);
			cout<<*it<<endl;
           				
		}
	} 
    
    
    
    return 0;
}

