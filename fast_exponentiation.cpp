#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define MOD 1000000007
#define ll long long
ll calcPower(ll a, ll b)
{
    // base case
    if(b==0){
        return 1;
    }
    // recursive case
    ll sum = calcPower(a,b/2);
    sum *= (sum%MOD);


    // check whether b is odd or not
    if(b&1){
        sum *= a;
    }
    return sum%MOD;
}
int main()
{
	int test;
	cin>>test;
	while(test--){
		ll a;
	    ll b;
	    cin>>a>>b;
	    ll res1 = calcPower(a,b);


	    cout<<res1<"\n";
	}

}
