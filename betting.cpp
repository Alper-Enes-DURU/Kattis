/* A program to find the percentage of winning the bet for 2 options.
 * Link: https://open.kattis.com/problems/betting
 */

#include <iostream>
using namespace std;

int main()
{
    int p;

    cin >> p;

    cout << 100.0 /p << endl << 100.0/(100-p);
    return 0;
}