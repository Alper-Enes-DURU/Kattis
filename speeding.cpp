/* A program to calculate the fastest speed in the given inputs.
 * Link: https://open.kattis.com/problems/speeding
 */

#include <iostream>
using namespace std;

int main()
{
    int n, highest = 0;
    int k = 0, l = 0;

    cin >> n;
    
    for(int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        if(x != 0)
        {
            if((y - l) / (x - k) > highest)
            {
                highest = (y - l) / (x - k);
            }
        }
        k = x;
        l = y;
    }

    cout << highest;

    return 0;
}