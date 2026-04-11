#include<bits/stdc++.h>
#include <vector>
using namespace std;
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t, x;
    cin >> t >> x;
    vector<ll> a(t+1);
    REP(i, t+1) cin >> a[i];

    ll pt = 0;
    ll px = a[0];
    cout << pt << ' ' << px << '\n';

    for(int i = 1; i < t+1 ; i++){
        if(a[i] - px >= x || px - a[i] >= x){
            cout << i <<' '<< a[i] << '\n';
            pt = i;
            px = a[i];
        }
    }

    return 0;
}
