/* A program to claculate the missing number in the finding of mean.
 * Link: https://open.kattis.com/problems/r2
 */

#include <iostream>
using namespace std;

int main()
{
    int r1, r2, s;

    cin >> r1 >> s;

    r2 = (2 * s) - r1;
    cout << r2; 

    return 0;
}