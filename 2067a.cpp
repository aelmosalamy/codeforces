#include <iostream>
using namespace std;

int main() {
  int t;
  int x, y, found;

  cin >> t;

  while (t--) {
    cin >> x >> y;

    found = 0;
    for (int k = 0; k < 113; k++) {
      if (y - x == 1 - 9*k)
        found = 1;
    }

    cout << (found ? "YES" : "NO") << endl;
  }
}

// 2025-02-17
// learnt to expand the sequence / try to find mathematical grounding for the problem
// as it helps simplify the problem significantly. I got stuck in modeling the carryover
// behavior & avoided it all together.
