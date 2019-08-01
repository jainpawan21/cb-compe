// PJ
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    ll arr[n];
    for(ll i=0; i<n; i++)
    {
    	cin>>arr[i];
	}
	int flag =0;
	if(n>=130)
	{
		cout<<"YES"<<endl;
	}
	else
	{
		for(ll i=0; i<n; i++)
		{
			for(ll j=i+1; j<n; j++)
			{
				for(ll k=j+1; k<n; k++)
				{
					for(ll l=k+1; l<n; l++)
					{
						if(arr[i]^arr[j]^arr[k]^arr[l] == 0)
						{
							cout<<"YES"<<endl;
							flag =1;
							break;
						}
					}
					if(flag)
						break;	
				}
				if(flag)
					break;
			}
			if(flag)
				break;		
		}
		if(flag==0)
		{
			cout<<"NO"<<endl;
		}
			
	}
    
    return 0;
}

