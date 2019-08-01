#include<bits/stdc++.h>

using namespace std;

int sumDigits(int N)
{
    int sum = 0;
    while(N>0)
    {
        sum += N%10;
        N /=10;
    }
    return sum;
}
int sumPrimeFactors(int N)
{
    int sum =0;
    for(int i=2; i*i<N; i++)
    {
        while(N%i == 0)
        {
            sum += i;
            N /= i;
        }
    }
    if(N!=1)
        sum += N;
    return sum;
}
int main()
{
    int N;
    cin>>N;
    int sum_Digits = sumDigits(N);
    cout<<sum_Digits<<"\n";
    int sum_Prime = sumPrimeFactors(N);
    cout<<sum_Prime;
    if(sum_Digits == sum_Prime)
    {
        cout<<"1";
    }
    else{
        cout<<"0";
    }
}
