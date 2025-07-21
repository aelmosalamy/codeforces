#include <iostream>
using namespace std;

int main() {
    int t, n;

    cin >> t;
    while (t--) {
        cin >> n;

        // if n is odd, alice can only win
        if (n % 2) {
            cout << "ALICE\n";
        // else, it depends on whether bob can respond to each of alice's plays
        } else {
            int c03, c12;
            c03 = c12 = 0;

            for (int i = 0; i < n; ++i) {
                if (i % 4 == 0) ++c03;
                if (i % 4 == 3) --c03;
                if (i % 4 == 1) ++c12;
                if (i % 4 == 2) --c12;
            }

            if (c03 || c12) {
                cout << "ALICE\n";
            } else {
                cout << "BOB\n";
            }
        }
    }

}

// or n % 4 ? 'Alice' : 'Bob'