/* A program to find the negative numbers from the given input.
 * Link: https://open.kattis.com/problems/cold
 */

#include <iostream>
using namespace std;

int main()
{
    int n, count = 0;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        
        if(x < 0)
        {
            count += 1;
        }
    }

    cout << count;
    
    return 0;
}