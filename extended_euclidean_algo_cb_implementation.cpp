#include <iostream>
using namespace std;

int gcd(int a,int b){
    //Base case
    if(b==0){
        return a;
    }
    //Recursive Case
    return gcd(b,a%b);
}

int lcm(int a,int b){
    
    return a*b/gcd(a,b);
    
}

int main() {

    cout<<gcd(10,15)<<endl;
    cout<<gcd(14,10)<<endl;
    
    cout<<lcm(10,15)<<endl;
    cout<<lcm(10,14)<<endl;
    

    return 0;
}
