#include<bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll a, b;
    cin >> a >> b;

    for(ll i = a ; i < b + 1 ; i++){
        if(100 % i == 0){
            cout << "Yes" << '\n';
            return 0;
        }
    }

    cout << "No" << '\n';
    return 0;
}
