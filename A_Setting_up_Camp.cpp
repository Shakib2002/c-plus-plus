#include<bits/stdc++.h>
using namespace std;

void solve() {
    long long A, B, C; 
    cin >> A >> B >> C;
    if (C < (3-B%3)%3) {
        cout << -1 << endl; return;
    }
    cout << A+(B+C+2)/3 << endl;
 
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
 
    int T = 1;
    cin >> T;
    while(T--) {
        solve();
    }
 
	return 0;
}