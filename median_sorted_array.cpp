#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> vec_arr1;
    vector<int> vec_arr2;
    vector<int> vec_arr3;
    
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
    	int temp;
    	cin>>temp;
    	vec_arr1.push_back(temp);
    	vec_arr3.push_back(temp);
	}
    for(int i=0; i<n; i++){
		int temp;
		cin>>temp;
		vec_arr2.push_back(temp);
		vec_arr3.push_back(temp);
	}
	sort(vec_arr3.begin(), vec_arr3.end());
    
    for(int i=0; i<vec_arr3.size(); i++){
    	cout<<vec_arr3[i] <<" ";
	}

    cout<<"\n"<<(vec_arr3[n-1]+vec_arr3[n])/2;  
    
	return 0;
}

