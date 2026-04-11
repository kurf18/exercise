#include<bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n; cin >> n;
    for(int i = 9; i >= 0; i--){
        int w = (1 << i);
        cout << (n / w) % 2;
    }
    cout << '\n';
    return 0;
}
