#include <iostream>
using namespace std;

void solve()
{
    int l1, l2, l3, b1, b2, b3;

    cin >> l1 >> b1 >> l2 >> b2 >> l3 >> b3;

    if (
        // case 1: three equal lengths
        (b1 == b2 && b2 == b3 && b1 == l1 + l2 + l3) ||
        ((l1 == l2 && l2 == l3 && l1 == b1 + b2 + b3) ||
         // case 2: two lengths amount to the larger one
         (l1 + l2 == l1 + l3 && b1 == l1 + l2 && b1 == b2 + b3) ||
         (b1 + b2 == b1 + b3 && l1 == b1 + b2 && l1 == l2 + l3)))
    {
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
}