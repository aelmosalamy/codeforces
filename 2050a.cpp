#include <iostream>
using namespace std;

int main() {
    int t, n, m, x, sum;
    string buf;

    cin >> t;

    while (t--) {
        cin >> n >> m;

        x = sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> buf;
            if (sum + buf.length() > m) break;
            sum += buf.length();
            x++;
        }

        // flush remaining lines
        for (int i = 0; i < n - x - 1; i++) {
            cin >> buf;
        }

        cout << x << endl;
    }

    return 0;
}
