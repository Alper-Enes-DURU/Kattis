/*  A program that shows missing/extra pieces of 
 * chess pieces on the board.
 * Link: https://open.kattis.com/problems/bijele
*/

#include <iostream>
using namespace std;

int main ()
{
    int k, q, r, b, kn, p;
    cin >> k >> q >> r >> b >> kn >> p;

    cout << (1 - k) << " "
         << (1 - q) << " "
         << (2 - r) << " "
         << (2 - b) << " "
         << (2 - kn) << " "
         << (8 - p);
    return 0;
}