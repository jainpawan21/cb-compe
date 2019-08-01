#include<bits/stdc++.h>
#define ll long long
using namespace std;



int main()
{
	ll test;
	cin>>test;
	while(test--)
	{
		ll n;
		cin>>n;
		ll arr[n];
		ll spare[n+1] = {0};
		ll sum = 0;
		spare[0] = 1;
		ll temp = 0;  
		for(ll i=0; i<n; i++)
		{
			cin>>arr[i];
			sum +=arr[i];
			temp = (sum+n)%n;
			spare[temp]++;
		}
		
		ll final_sum = 0;
		for(ll i=0; i<=n; i++)
		{
			ll no = spare[i];
			final_sum += ((no)*(no-1))/2;
		}
		
		cout<<final_sum<<endl;
	}
	
}

