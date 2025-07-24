#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, m, a;

    // how do we fill a rectange with least amount of squares?
    //  ---------------
    //  |             |
    //  |             |
    //  |_____________|
    cin >> n >> m >> a;

    long long int cols = ceil((double)n / a);
    long long int rows = ceil((double)m / a);

    cout << rows * cols << endl;

    return 0;
}