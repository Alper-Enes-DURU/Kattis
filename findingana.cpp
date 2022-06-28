/* 
 *   A program that prints the string after the first character 'a'.
 *   Link: https://open.kattis.com/problems/findingana
 */

#include <iostream>
#include <string>
using namespace std;

int main ()
{
    string s;
    getline(cin, s);

    cout << s.substr(s.find('a'));
    
    return 0;
}