#include <iostream>
#include <algorithm>
using namespace std;

void solve()
{
    int n, s, x, minval, maxval;

    minval = 101;
    maxval = -1;

    cin >> n >> s;

    for (int i = 0; i < n; i++) {
        cin >> x;
        minval = min(x, minval);
        maxval = max(x, maxval);
    }

    cout << (s >= maxval ? s - minval : s <= minval ? maxval - s : maxval - minval + min(maxval - s, s - minval)) << endl;
}

int main()
{
    int t;

    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}