/* A program to calculate the minimal number of scientists you need to bribe.
 * Link: https://open.kattis.com/problems/faktor
 */

#include <iostream>
using namespace std;

int main()
{
    int a, i;

    cin >> a >> i;

    cout << a * i - a + 1;
    
    return 0;
}