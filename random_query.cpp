// PJ
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
	ll arr[1000005] = {0};
	ll prevAlloc[1000005]={0};
	ll ans[1000005]={0};
	
	for(int i=1; i<n; i++)
	{
		cin>>arr[i];
	}
	ll sum = 0;
	ll finalAns = 0;
	for(int i=1; i<=n; i++)
	{
		ans[i] = ans[i-1] + i- prevAlloc[arr[i]];
		prevAlloc[arr[i]] = i;
		sum+= ans[i];
		
 	}
	ll finalAns = ((2*sum)-n)/(n*n);
	cout<<setpricision(6)<<finalAns;
    return 0;
}

