#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--) {
		int n, x, s;
		cin >> n >> x >> s;
		for(int i=0; i<s; ++i) {
			int a, b;
			cin >> a >> b;
			if(a==x)
				x=b;
			else if(b==x)
				x=a;
		}
		cout << x << "\n";
	}
}
