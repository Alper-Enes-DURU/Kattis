/* A program to calculate the possible values for
 * average min and max values of series of number.
 * Link: https://open.kattis.com/problems/ratingproblems
 */

#include <iostream>
using namespace std;

int main()
{
    int n, k, total = 0;
    double minAvg, maxAvg;

    cin >> n >> k;

    for(int i = 0; i < k; i++)
    {
        int x;
        cin >> x;
        total += x;
    }

    minAvg = (total + -3.0 * (n - k)) / n;
    maxAvg = (total + 3.0 * (n-k)) / n;

    cout << minAvg << " " << maxAvg;

    return 0;
}