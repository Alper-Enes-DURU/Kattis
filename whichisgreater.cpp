/*
    A program to find out which number is greater in
the given inputs.
    Link: https://open.kattis.com/problems/whichisgreater
*/

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if (a > b)
        cout << "1";
    else
        cout << "0";

    return 0;
}