/* A program to calculate the cost of seed.
 * Link: https://open.kattis.com/problems/grassseed
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int l;
    double c, total = 0;

    cin >> c >> l;

    for(int i = 0; i < l; i++)
    {
        double w, h;
        cin >> w >> h;
        total += w * h;
    }

    total *= c;
    cout << fixed << setprecision(8);
    cout << total;

    return 0;
}