#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
#define f(n) for (int i=0; i < n; i++)
#define MAX = INT_MAX, MIN = INT_MIN

int main() {
    ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    int t, temp, a[1000];
    cin >> t;
    for (int i = 0; i < t; i++) {
        int arr[3] = {0}, n;
        cin >> n;
        for (int j = 0; j < n; j++) {
            
            cin >> temp;
            arr[temp]++;
        }
        // if (arr[0] <= arr[1]) a[i] = 1;
        // else a[i] = 0;
        //cout << arr[0] << " " << arr[1] << endl;
        if (arr[0] <= arr[1]) cout << "Bessie\n" ;
        else cout << "Elsie\n";
    }
    // f(t) {
    //     if (a[i] == 1) cout << "Bessie\n" ;
    //     else cout << "Elsie\n";
    // }
    return 0;
}