/* A program to calculate the sum of the given numbers.
 * Link: https://open.kattis.com/problems/nsum
 */

#include <iostream>
using namespace std;

int main()
{
    int n, total = 0; 

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        int x;

        cin >> x;

        total += x;
    }

    cout << total;
    
    return 0;
}