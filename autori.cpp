/*
    A program to find the first letter of each word
in the given string.
    Link: https://open.kattis.com/problems/autori
*/

#include <iostream>
#include <string>
#include <sstream>  
using namespace std;

int main()
{
    string s, t;
    getline(cin, s);
    stringstream x(s);
    while (getline(x, t, '-')) {  
        cout << t[0];
    }
    
    return 0;
}