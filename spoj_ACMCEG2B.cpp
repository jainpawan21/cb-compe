#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
	typedef pair<int,int> pair_int;
	map<pair_int, string> table;
	
	int n;
	cin>>n;
	while(n--){
		pair_int code;
		cin>>code.first>>code.second;
		string name;
		cin>>name;
		table[code] = name;
	}
	
	int q;
	cin>>q;
	while(q--){
		pair_int code1;
		cin>>code1.first>>code1.second;
		cout<<table[code1]<<endl;
	}
	
	// your code here

	return 0;
}
