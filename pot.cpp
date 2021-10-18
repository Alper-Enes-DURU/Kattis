/* A program to calculate the sum of power of numbers.
 * Link: https://open.kattis.com/problems/pot
 */

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, total = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        total += pow(x / 10, x % 10);
    }

    cout << total;

    return 0;
}