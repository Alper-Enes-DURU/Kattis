/* A program to reverse the digits of a number.
 * Link: https://open.kattis.com/problems/digitswap
 */

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    cout << n % 10 << n /10;
    
    return 0;
}