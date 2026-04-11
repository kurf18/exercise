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
    vector<double> l(n);
    REP(i, n) cin >> l[i];

    ll ans = 0;

    REP(i, (1 << n)) {
        double ns = 0.5;
        ll curr = 0;

        REP(j, n) {
            double ps = ns;

            if ((i >> j) & 1) {
                ns += l[j];
            } else {
                ns -= l[j];
            }

            if ((ps > 0 && ns < 0) || (ps < 0 && ns > 0)) {
                curr++;
            }
        }
        ans = max(ans, curr);
    }
    cout << ans << '\n';
    return 0;
}
