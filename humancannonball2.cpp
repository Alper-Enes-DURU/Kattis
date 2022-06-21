/* A program to calculate the projectile.
 * Link: https://open.kattis.com/problems/humancannonball2
 */

#include <iostream>
using namespace std;

int main()
{
    int n = 5, total = 0;

    for(int i = 1; i <= n; i++)
    {
        total += i;
    }
    cout << total ;
    return 0;
}