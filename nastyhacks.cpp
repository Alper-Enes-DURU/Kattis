/* A program to find out if their advertisement is profitable or not.
 * Link: https://open.kattis.com/problems/nastyhacks
 */

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        int x, y, z;
        cin >> x >> y >> z;

        if(y - z > x)
        {
            cout << "advertise" << endl;
        }
        else if(y - z == x)
        {
            cout << "does not matter" << endl;
        }
        else if(y - z < x)
        {
            cout << "do not advertise" << endl;
        }
    }

    return 0;
}
