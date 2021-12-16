/* A program to calculate the time between stopwatch pauses.
 * Link: https://open.kattis.com/problems/stopwatch
 */

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int total = 0;
    if(n % 2 == 1)
    {
        cout << "still running";
    }
    else
    {
        for(int i = 0; i < n; i+=2)
        {
            int x, y;
            cin >> x >> y;
            total += (y - x);
        }

        cout << total;
    }

    return 0;
}