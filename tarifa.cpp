/* A program to calculate the allowed internet usage
 * of next month.
 * Link: https://open.kattis.com/problems/tarifa
 */

#include <iostream>
using namespace std;

int main()
{
    int x, n, totalLeft;

    cin >> x >> n;
    totalLeft = x;

    for(int i = 0; i < n; i++)
    {
        int y;
        cin >> y;
        totalLeft += x - y;
    }

    cout << totalLeft;
    return 0;
}