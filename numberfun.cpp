/* A program to find out if the 3rd number can be achievable by the given
 * first 2 numbers.
 * Link: https://open.kattis.com/problems/numberfun
 */

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        double x, y, z;
        cin >> x >> y >> z;

        if(abs(x-y) == z 
            || (x + y) == z 
            || (x * y) == z
            || (x / y == z || y / x == z)
        )
        {
            cout << "Possible" << endl;
        }
        else
        {
            cout << "Impossible" << endl;
        }
    }

    return 0;
}