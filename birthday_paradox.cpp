//find minimum number of people present in the room so that probability of having two people same birthday is 50%


#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	const int denom = 365;
	int numerator = 365;
	
	float p = 1;
	int num = 0;
	while(p>0.5){
		p = p*numerator/denom;
		numerator--;
		num++;
		cout<<p<<"   "<<num<<endl;
	}
 
    
    
    return 0;
}

