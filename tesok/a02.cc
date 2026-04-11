#include<bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, x;
    cin >> n >> x;
    vector<ll> a(n);
    REP(i, n) {
        cin >> a[i];
        if(a[i] == x){
            cout << "Yes" <<'\n';
            return 0;
        }
    }
    cout << "No" << '\n';
    return 0;
}
