/*
 * A program to count the vowels in the given string.
 * Link: https://open.kattis.com/problems/countthevowels
 */

#include <iostream>
using namespace std;

int main ()
{
    string s;
    getline(cin, s);
    int count = 0;

    for (int i = 0; i < s.length(); i++)
    {
        s[i] = tolower(s[i]);
        if (s[i] == 'a' || s[i] == 'e'  || s[i] == 'u' || s[i] == 'i'
            || s[i] == 'o')
            count++;
    }

    cout << count;
    return 0;
}