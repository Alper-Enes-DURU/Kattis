/* A program to find where the ball is after cup switches.
 * Link: https://open.kattis.com/problems/trik
*/

#include <iostream>
using namespace std;

int main()
{
    string s;
    int firstCupIndex = 1, secondCupIndex = 2, thirdCupIndex = 3;
    int resultIndex = 1;

    cin >> s;

    for(int x = 0; x < s.length(); x++)
    {
        if (s[x] == 'A')
        {
            if (resultIndex == 1)
            {
                resultIndex = 2;
            }
            else if (resultIndex == 2)
            {
                resultIndex = 1;
            }
        }
        else if (s[x] == 'B')
        {
            if (resultIndex == 2)
            {
                resultIndex = 3;
            }
            else if (resultIndex == 3)
            {
                resultIndex = 2;
            }
        }
        else if (s[x] == 'C')
        {
            if (resultIndex == 1)
            {
                resultIndex = 3;
            }
            else if (resultIndex == 3)
            {
                resultIndex = 1;
            }
        }
    }

    cout << resultIndex;
    
    return 0;
}