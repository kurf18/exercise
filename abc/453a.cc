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
    vector<char> s(n);
    REP(i, n) cin >> s[i];
    ll key = n;

    REP(i, n) {
        if (s[i] != 'o') {
            key = i;
            break;
        }
    }
    for (ll i = key; i < n; i++) {
        cout << s[i];
    }
    cout << '\n';

    return 0;
}
