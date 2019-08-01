#include<bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
#define ll long long
using boost::multiprecision::cpp_int;
using namespace std;

cpp_int binomialCoeff(ll n, ll k)
{
    cpp_int res = 1;
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
    while(test--)
    {
        ll n;
        cin>>n;
        cpp_int temp = binomialCoeff(2*n, n);
        temp = temp / (n+1);
        cout<<temp<<endl;

    }

}
