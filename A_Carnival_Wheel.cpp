#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int l, a, b;
        cin >> l >> a >> b;

        int g = gcd(l, b);
        int cycle = l / g;

        int ans = 0;
        for (int i = 0; i < cycle; i++) {
            int pos = (a + 1LL * i * b) % l;
            ans = max(ans, pos);
        }

        cout << ans << "\n";
    }

    return 0;
}
