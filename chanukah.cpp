/* A program to calculate the number of candles.
 * Link: https://open.kattis.com/problems/chanukah
 */

#include <iostream>
using namespace std;

int main()
{
    int n;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        int k, x;
        int total = 0;
        cin >> k >> x;

        for(int j = 1; j <= x; j++)
        {
            total += j;
        }

        total += x;
        
        cout << k << " " << total << endl;
    }
    return 0;
}