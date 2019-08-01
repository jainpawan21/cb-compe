// PJ
#include <bits/stdc++.h>
using namespace std;


string minWindow(string s, string t) {
        vector<int> hist(128, 0);
        int remaining = t.length();
        for (int i=0; i<remaining; i++)
		{
			hist[t[i]]++;
			
		}
		 
        int left = 0, right = 0, minStart = 0, minLen = numeric_limits<int>::max();
        while (right < s.length()){
        	cout<<"right : "<<right<<" "<<hist[right]<<endl;
        	cout<<"left : "<<left<<" "<<hist[left]<<endl;
            if (--hist[s[right++]] >= 0) remaining--;
            while (remaining == 0){
                if (right - left < minLen){
                    minLen = right - left;
                    minStart = left;
                }
                if (++hist[s[left++]] > 0) remaining++;
            }
        }
            
        return minLen < numeric_limits<int>::max() ? s.substr(minStart, minLen) : "";
    }
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    string t;
    getline(cin, s);
    getline(cin, t);
    cout<<minWindow(s,t);
    
    return 0;
}

