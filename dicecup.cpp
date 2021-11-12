/* A program to compute the most likely outcomes for the sum of two dice rolls.
 * Link: https://open.kattis.com/problems/dicecup
 */

#include <iostream>
using namespace std;

int main()
{
    int n, m, lowValue, maxValue;

    cin >> n >> m;
    
    if(n > m)
    {
        lowValue = m;
        maxValue = n;
    } else
    {
        lowValue = n;
        maxValue = m;
    }

    for(int i = lowValue; i <= maxValue; i++)
    {
        cout << i + 1 << endl;
    }
    
    return 0;
}