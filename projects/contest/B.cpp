#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;

        cin >> n;
        cin >> s;

        stack<int> st;
        vector<bool> printed(n + 1, false);

        for (int i = 1; i <= n; ++i) {
            if (s[i - 1] == '1') {
                st.push(i);
            }
            else if (s[i - 1] == '2') {
                if (!st.empty()) {
                    int doc = st.top();
                    st.pop();
                    printed[doc] = true;
                } else {
                    printed[i] = true;
                }
            }
            else {
                printed[i] = true;
            }
        }

        vector<int> notPrinted;

        for (int i = 1; i <= n; ++i) {
            if (!printed[i]) {
                notPrinted.push_back(i);
            }
        }

        cout << notPrinted.size() << '\n';

        for (int doc : notPrinted) {
            cout << doc << ' ';
        }
        cout << '\n';
    }

    return 0;
}