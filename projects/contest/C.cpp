#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n + 1);

        for (int i = 1; i <= n; ++i) {
            cin >> a[i];
        }

        int m = n - 4;

        vector<long long> value(m + 1);

        for (int i = 1; i <= m; ++i) {
            value[i] = a[i] + a[i + 2] - a[i + 4];
        }

        long long ans = 0;

        unordered_map<long long, long long> cnt;
        cnt.reserve(m * 2);

        for (int i = 1; i <= m; ++i) {
            ans += cnt[value[i]];
            cnt[value[i]]++;
        }

        for (int i = 1; i <= m; ++i) {
            if (i + 2 <= m && value[i] == value[i + 2]) {
                --ans;
            }

            if (i + 4 <= m && value[i] == value[i + 4]) {
                --ans;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}