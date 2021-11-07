/* A program to print the odd number inputs to the user.
 * Link: https://open.kattis.com/problems/oddecho
 */

#include <iostream>
#include <array>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        if(i % 2 == 0)
        {
            cout << s << endl;
        }
    }
    return 0;
}