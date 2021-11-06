/* A program to calculate the free spaces on the electrical outlet.
 * Link: https://open.kattis.com/problems/electricaloutlets
 */

#include <iostream>
using namespace std;

int main()
{
    int n;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        int k, total = 0;
        cin >> k;

        for(int j = 0; j < k; j++)
        {
            int x;
            cin >> x;
            total += x;
        }

        cout << total - (k - 1) << endl;
    }
    return 0;
}