#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
    int t;
    cin>>t;
    ll prime[] = {2, 3, 5, 7, 11, 13, 17, 19};
    while(t--){
        ll n;
        cin>>n;
        ll no_subset = (1<<8) - 1;
        ll ans = 0;

        for(ll i=1; i<=no_subset; i++){
            ll denom = 1ll;
            ll setBits = __builtin_popcount(i);

            for(ll j=0; j<8; j++){
                if(i&(1<<j)){
                    denom = denom * prime[j];
                }

            }
            if(setBits & 1){
                ans += n/denom;
            }
            else{
                ans -= n/denom;
            }
        }
        cout<<ans<<endl;
    }


}
