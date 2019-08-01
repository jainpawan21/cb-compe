#include <bits/stdc++.h>
#include<cstring>


using namespace std;

void swap(string *a, string *b){
	string temp = *a;
	*a = *b;
	*b = temp;
} 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    vector<string> vec_str;
    int num_str;
    cin>>num_str;
    while(num_str--){
    	string str_input;
    	cin>>str_input;
    	vec_str.push_back(str_input);
    	
	}
	sort(vec_str.begin(), vec_str.end());   

    int size = vec_str.size();
    for(int i=0; i<size-1; i++){
    	if(vec_str[i][0] == vec_str[i+1][0]){
    		if(vec_str[i].length() < vec_str[i+1].length()){
    			string temp = vec_str[i];
    			vec_str[i] = vec_str[i+1];
    			vec_str[i+1] = temp;
			}
		}
	}
	for(int i=0; i<size; i++){
		cout<<vec_str[i]<<"\n";
	
	}
    return 0;
}

