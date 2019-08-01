// PJ
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
    	string str1,str2;
		
    	cin>>str1>>str2;
    	int len = str1.length();
    	
    	int arr1[len]={0};
		int arr2[len]={0};
		int arr3[len]={0};
    	for(int i=0;i<len; i++){
    		arr1[i] = arr1[i] * 10 + (str1[i]-48);
    		arr2[i] = arr2[i] * 10 + (str2[i]-48);
    		arr3[i] = arr1[i] ^ arr2[i];
		}

		for(int i=0; i<len; i++){
			cout<<arr3[i];
		}
		cout<<endl;
	}
    
    
    return 0;
}

