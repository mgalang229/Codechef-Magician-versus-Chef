#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

vector<ar<int, 2>> v;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--) {
		int n, x, s;
		cin >> n >> x >> s;
		v=vector<ar<int, 2>>(s);
		for(int i=0; i<s; ++i)
			cin >> v[i][0] >> v[i][1];
		for(int i=0; i<s; ++i) {
			if(v[i][0]==x)
				x=v[i][1];
			else if(v[i][1]==x)
				x=v[i][0];
		}
		cout << x << "\n";
	}
}
