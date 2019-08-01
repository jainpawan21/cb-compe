#include<bits/stdc++.h>
#define ll long long

using namespace std;

ll binomialCoeff(ll n, ll k)
{
    ll res = 1ll;
    if(k>n-k)
    {
        k = n-k;
    }
    for(ll i=0; i<k; i++)
    {
        res *= n-i;
        res /= i+1;
    }
    return res;
}
int main()
{
    ll test;
    cin>>test;
    while(test--){
        ll n,k;
        cin>>n>>k;
        ll ans=1;
        ll iterate;
        if(n>k){
            ans=binomialCoeff(n-1, k-1);
            cout<<ans<<endl;
        }
        else{
            cout<<ans<<endl;
        }

    }
}
