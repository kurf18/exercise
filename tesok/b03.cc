#include<bits/stdc++.h>
#include <vector>
using namespace std;
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin >> n;
    vector<ll> a(n);
    REP(i, n) cin >> a[i];

    int jdg = 0;

	for (int i = 0; i <= n-3; i++) {
		for (int j = i+1; j <= n-2; j++) {
			for (int k = j+1; k <= n-1; k++) {
				if (a[i] +a[j] + a[k] == 1000){
				jdg = 1;
				break;
				}
			}
			if(jdg) break;
		}
		if(jdg) break;
	}

	if (jdg) cout << "Yes" << endl;
	else cout << "No" << endl;

    return 0;
}
