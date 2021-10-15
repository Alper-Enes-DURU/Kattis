/* A program to find out who wins the stone game.
 * Link: https://open.kattis.com/problems/twostones
*/

#include <iostream>
using namespace std;

int main ()
{
    int n;
    
    cin >> n;

    if (n % 2 == 1)
    {
        cout << "Alice";
    }
    else
    {
        cout << "Bob";
    }

    return 0;
}