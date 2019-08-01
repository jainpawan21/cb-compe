#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int arr1[32] = {0};
    for(int i=0; i<n; i++){
        int j=0;
        int temp = arr[i];
        while(temp>0){
            arr1[j] += temp&1;
            temp >>=1;
            j++;
        }
    }

    for(int i=0; i<32; i++){
        arr1[i] %= 3;
    }
    int p = 1;
    int res = 0;
    for(int i=0; i<32; i++){
       res += arr1[i]*p;
       p <<= 1;
    }
    cout<<res;

}
