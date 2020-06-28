#include <bits/stdc++.h>

using namespace std;

typedef long long ll; 

void decode() {
	int x, y, z, a, b, c;
	cin >> x >> y >> z >> a >> b >> c;
	int cnt = 0;
	if(a >= x) {
		a -= x;
		cnt++;
	}
	int p = a + b;
	if(p >= y) {
		p -= y;
		cnt++;
	}
	int f = p + c;
	if(f >= z) {
		f -= z;
		cnt++;
	}
	cout << (cnt == 3 ? "YES" : "NO") << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	decode();
	return 0;
}
