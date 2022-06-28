/* 
 * A program that show if the inputted string is not asymmetric.
 * Link: https://open.kattis.com/problems/eyeofsauron
 */

#include <iostream>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    cout << ((s.find("()") * 2) == ((s.length() - 2)) ? "correct" : "fix");
    return 0;
}