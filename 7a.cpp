#include <iostream>
using namespace std;

/*

summary:
    simple chess board, counts how many strokes needed to paint it

input:
    WWWBWWBW
    BBBBBBBB
    WWWBWWBW
    WWWBWWBW
    WWWBWWBW
    WWWBWWBW
    WWWBWWBW
    WWWBWWBW

ouput:
    3

*/
int main()
{
    int out, *frontier;

    frontier = new int[8];
    out = 0;

    for (int i = 0; i < 8; i++)
    {
        frontier[i] = 1;
    }

    for (int i = 0; i < 8; i++)
    {
        int row_black = 1;
        for (int j = 0; j < 8; j++)
        {
            if (getchar() == 'W')
            {
                row_black = 0;
                frontier[j] = 0;
            }
        }
        getchar();

        if (row_black)
            out++;
    }

    for (int i = 0; i < 8; i++)
    {
        out += frontier[i];
    }

    if (out == 16)
        out >>= 1;

    cout << out << endl;

    return 0;
}