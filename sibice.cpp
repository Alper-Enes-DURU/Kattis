/* A program to find if match can fit in the box.
 * Link: https://open.kattis.com/problems/sibice
 */

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, l, w;
    
    cin >> n >> l >> w;

    int hyp = sqrt(l * l + w * w);
    
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        
        if(x <= hyp)
        {
            cout << "DA" << endl;
        }
        else
        {
            cout << "NE" << endl;
        }
    }
    return 0;
}