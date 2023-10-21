#include <bits/stdc++.h>

using namespace std;

int n;

inline void read() {
	cin >> n;
}

inline void solve() {
	for (int x = 1; x <= 20; x++) {
	    for (int y = 1; y <= 20; y++) {
	        if (x + y >= n || x == y) continue;
	        int z = n - x - y;
	        if (z == x || z == y) continue;
	        if (x % 3 == 0 || y % 3 == 0 || z % 3 == 0) {
	            continue;
	        }
	        puts("YES");
	        cout << x << ' ' << y << ' ' << z << endl;
	        return;
	    }
	}
	puts("NO");
}

int main () {
    int t;
    cin >> t;
    while (t--){
        read();
        solve();
    }
}
