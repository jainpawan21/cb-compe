#include<bits/stdc++.h>

using namespace std;
bool comparator(char a, char b)
{
    return a > b;
}
int main()
{
    char arr[] = { 'R', 'G' ,'B' ,'G' , 'R', 'R', 'G', 'B'};
    int n = sizeof(arr)/sizeof(char);
    sort(arr,arr+n,comparator);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
