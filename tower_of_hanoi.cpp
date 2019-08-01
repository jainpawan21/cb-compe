// PJ
#include <bits/stdc++.h>
using namespace std;

void towOfHanoi(int n, char src, char dest, char help)
{
	if(n==0)
	{
		return;
	}
	
	towOfHanoi(n-1,src,help,dest);
	
	cout<<"Move "<<n<< " from "<<src<<" to "<<dest<<endl;
	
	towOfHanoi(n-1, help,dest,src);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
	cin>>n;
	towOfHanoi(n,'A','C','B');
    
    
    
    return 0;
}

