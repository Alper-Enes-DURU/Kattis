/* A program to check the unique entries by user.
 * Link: https://open.kattis.com/problems/everywhere
 */

#include <iostream>
#include <array>
#include <set>
using namespace std;

int main()
{
    int n;
    
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++)
    {
        int x;

        cin >> x;
        set<string> unique;
        
        for(int j = 0; j < x; j++)
        {
            string s;
            cin >> s;
            unique.insert(s);
        }

        arr[i] = unique.size();
        unique.clear();
    }


    for(int j = 0; j < n; j++)
    {
        cout << arr[j] << endl;
    }

    return 0;
}