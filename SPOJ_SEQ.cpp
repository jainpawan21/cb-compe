
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000000
ll k;
vector<ll> a,b,c;

vector<vector<ll> > multiply(vector<vector<ll> > A, vector<vector<ll> > B)
{
    vector<vector<ll> > C(k+1, vector<ll>(k+1));
    for(int i=1; i<=k; i++){
        for(int j=1; j<=k; j++){
            for(int x=1; x<=k; x++){
                C[i][j] = C[i][j] + (A[i][x]*B[x][j]%MOD)%MOD;
            }
        }
    }
}

vector<vector<ll> > pow(vector<vector<ll> >A, ll p)
{
    if(p==1){
        return A;
    }

    if(p&1){
        return multiply(A, pow(A,p-1));
    }
    else{
        vector<vector<ll> > X = pow(A,p/2);
        return multiply(X,X);
    }
}
ll compute( ll n)
{
    if(n==0){
        return 0;
    }

    //suppose n<=k
    if(n<=k){
        return b[n-1];
    }


    // other wise we use matrix exponentiation
    vector<ll> F1(k+1);
    for(int i=1; i<=k; i++){
        F1[i] = b[i-1];
    }

    // transformation Matrix

//    vector<vector<ll> > T(k+1,vector<ll>(k+1));
     vector<vector<ll> > T{ { 0, 0, 1 }, 
                            { 0, 1, 1 } }; 
    // Let initialise T
//    for(int i=1; i<=k; i++){
//        for(int j=1; j<=k; j++){
//            if(i<k){
//                if(j == i+1){
//                    T[i][j] = 1;
//                }
//                else{
//                    T[i][j] = 0;
//                }
//                continue;
//            }
//
//            // Last row
//            T[i][j] = c[k-j];
//
//        }
    }

    T = pow(T,n-1);
    ll res = 0;
    for(int i=1; i<=k; i++){
        res = (res + (T[k][i] * F1[i])%MOD)%MOD;
    }
    return res;

}

int main()
{
    ll t,n,num;
    cin>>t;
    while(t--){
        cin>>k;

        // Input vector F1

        b.push_back(0);
        b.push_back(1);
       

        // Input coefficient vector
        c.push_back(1);
		c.push_back(1);
		
		
        cin>>n;

        cout<<compute(n)<<endl;
        a.clear();
        b.clear();
        c.clear();
    }
}
