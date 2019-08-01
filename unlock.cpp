// PJ
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void swap(ll &x, ll &y)
{
	ll temp = x;
	x = y;
	y = temp;
}
void largestPerm(ll *arr,ll n,ll k)
{
	ll temp = 0;
	ll index[n+1];
	for(ll i=0; i<n; i++)
	{
		index[arr[i]] = i;
	}
	for(ll i=0; i<n && k!=0; i++){
		if(arr[i] == n-i)
		{
			continue;
		}
		
			temp = index[n-i];
			index[arr[i]] = index[n-i]; 
	        index[n-i] = i;
			
			swap(arr[temp], arr[i]); 
			k--;
		
		
	}
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,k;
    cin>>n>>k;
    ll arr[n];
    for(ll i=0; i<n; i++)
    {
    	cin>>arr[i];
	}
	
	largestPerm(arr, n, k);
	for(ll i=0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}
    
    return 0;
}

