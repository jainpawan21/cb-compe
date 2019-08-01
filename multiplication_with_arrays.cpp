#include <iostream>
using namespace std;

void multiply(int *a, int &n, int no){
    //array 1 2 3 0 0 0 by number 4

    int carry = 0;
    for(int i=0; i<n; i++){
         int product = a[i]*no + carry;
         a[i] = product % 10;
         carry = product/10;
    }

    // left out carry
    while(carry){
        a[n] = carry%10;
        carry = carry/10;
        n++;
    }

}
void big_factorial(int number){

    int *a = new int[1000]{0};
    a[0] = 1;
    int n = 1;// which denotes before which we have stotred some digits.
    
    for(int i=2; i<=number; i++){
        multiply(a,n,i);

    }
    // print the digits in reverse order 
    for(int i=n-1; i>=0; i--){
        cout<<a[i];
    }
    cout<<endl;


}


int main() {
    big_factorial(6);
}

