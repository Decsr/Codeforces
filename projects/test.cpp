#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> a = {5, 3, 1, 4, 2};

    sort(a.begin(), a.end());

    for (int x : a) {
        cout << x << ' ';
    }

    return 0;
}