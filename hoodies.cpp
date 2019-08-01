#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pi;
int main()
{
	priority_queue<pi, vector<pi>, greater<pi> > pq;
	int q;
	cin>>q;
	while(q--) {
        char ch;
        cin>>ch;
        if(ch == 'E'){
            int x, y;
            cin>>x>>y;
            pq.push(make_pair(x,y));
        }
        else {
            pair<int, int> top = pq.top();
            cout << top.first<<" "<< top.second<<endl;
            pq.pop();
        }

	}
}
