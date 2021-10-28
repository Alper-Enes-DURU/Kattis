/* A program to print the text for n times with
 * n is given number by the user.
 * Link: https://open.kattis.com/problems/timeloop
 */

#include <iostream>
using namespace std;

int main()
{
    int n;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cout << i + 1 << " Abracadabra" << endl;
    }

    return 0;
}