/* A program to calculate the dots on a square.
 * Link: https://open.kattis.com/problems/planina
 */

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;

    cin >> n;

    long long int res = pow(pow(2, n) + 1, 2);
    cout << res;

    return 0;
}