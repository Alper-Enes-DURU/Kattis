/* A program to calculate the quality of life.
 * Link: https://open.kattis.com/problems/qaly
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    double total = 0;
    cin >> n;

    for (int a = 0; a < n; a++)
    {
        double q, y;
        cin >> q >> y;
        total += q * y;  
    }

    cout << total;
    
    return 0;
}