#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t, n, x;
    vector<int> a;
    cin >> t;

    while (t--) {
        cin >> n;

        for (int i = 0; i < n; i++) {
            cin >> x;
            a.push_back(x);
        }
        
        sort(a.begin(), a.end());

    }

    return 0;
}
