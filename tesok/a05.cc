#include<bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,k;
    cin >> n >> k;
    ll ans = 0;
    for(int x = 1; x <= n; x++) {
        for (int y = 1; y <= n; y++) {
            int z = k - x - y;
            if(z >= 1 and z <= n) ans++;
        }
    }
    cout << ans << '\n';
    return 0;
}
