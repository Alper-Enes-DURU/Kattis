/* A program that returns true if it's the specified dates.
 * Link: https://open.kattis.com/problems/isithalloween
 */

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    if (s == "OCT 31")
    {
        cout << "yup";
    }
    else if(s == "DEC 25")
    {
        cout << "yup";
    }
    else
    {
        cout << "nope";
    }

    return 0;
}