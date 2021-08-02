#include<bits/stdc++.h>
using namespace std;


int main() {
    int n, q;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cin >> q;
    for (int i = 0; i < q; i++) {
        int l, r;
        cin >> l >> r;
        l--;
        r--;
        /// make it zero-based
        /// now we want to reverse [l,r]
        for (int i = 0; i <= (r - l) / 2; i++) {
            /// swap(a[l+i], a[r-i])
            int tmp = a[l + i];
            a[l + i] = a[r - i];
            a[r - i] = tmp;
        }
        for (int i = 0; i < n; i++) {
            cout << a[i] << ' ';
        }
        cout << '\n';
    }
    return 0;
}
//https://quera.ir/college/2572/chapter/7136/lesson/33959/