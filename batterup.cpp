/* A program to calculate player’s slugging percentage as a real number.
 * Link: https://open.kattis.com/problems/batterup
 */

#include <iostream>
using namespace std;

int main()
{
    int n, total = 0, count = 0;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if(x >= 0)
        {
            total += x;
            count += 1;
        }
    }

    cout << total / static_cast<double>(count);

    return 0;
}