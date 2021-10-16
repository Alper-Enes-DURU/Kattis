/* A program to calculate the length of the cake.
 * Link: https://open.kattis.com/problems/shatteredcake
 */

#include <iostream>
using namespace std;

int main()
{
    int w, n, totalArea = 0;

    cin >> w >> n;

    for(int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        totalArea += x * y;
    }

    cout << totalArea / w;
    return 0;
}