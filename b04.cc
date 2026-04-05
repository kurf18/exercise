#include<bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string n;
	cin >> n;

    int ans = 0;
	REP(i, n.size()) {
		int keta;
		int kurai = (1 << (n.size() - 1 - i));
		if (n[i] == '0') keta = 0;
		if (n[i] == '1') keta = 1;
		ans += keta * kurai;
	}
	cout << ans << '\n';
    return 0;
}
