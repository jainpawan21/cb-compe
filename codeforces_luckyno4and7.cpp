#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string str;
    cin>>str;
    int strlen = str.length();
    int inisum = (1<<strlen) - 2;
    int extsum = 0;
    int temp = 0;
    for(int i=strlen-1; i>=0; i--){
    	if(str[i] == '4')
    		continue;
    	else
    	    temp = strlen-1-i;
    		extsum += 1<<temp;
	}
	
	cout<< inisum + extsum + 1;
    return 0;
    
}

