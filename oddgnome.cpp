/* A program to find the kings' postition in the forest.
 * Link: https://open.kattis.com/problems/oddgnome
 */

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    
    cin >> n;
    int arr [] = {};
    for (int i = 0; i < n; i++)
    {
        int x,  p = 0;
        cin >> x;
    
        for(int a = 0; a < x; a++)
        {
            int k;

            cin >> k;

            if (p != 0 && abs(p - k) != 1)
            {
                arr[i] = a + 1;
                break;
            }

            p = k; 
        }        
    }

    for(int j = 0; j < n; j++)
    {
        cout << arr[j] << endl;
    }

    return 0;
}