/* A program to add letter 'a' in the string.
 * Link: https://open.kattis.com/problems/greetings2
 */

#include <iostream>
using namespace std;

int main()
{
    string s, additional = "h";
    
    cin >> s;

    int count = 2 * (s.length() - 2);
    
    for(int i = 0; i < count; i++)
    {
        additional += "e";
    }

    additional += 'y';

    cout << additional;

    return 0;
}