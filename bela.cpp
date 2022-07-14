/*
 * A program to count the total number of points in a card game.
 *  Link: https://open.kattis.com/problems/bela
*/

#include <iostream>
using namespace std;

int main()
{
    int n, total = 0;
    char s;
    cin >> n;
    cin >> s;

    for (int i = 0; i < 4 * n; i++)
    {
        char a, b;
        cin >> a >> b;
        if (b == s && a == 'A')
            total += 11;
        else if (b != s && a == 'A')
            total += 11;

        if (b == s && a == 'K')
            total += 4;
        else if (b != s && a == 'K')
            total += 4;

        if (b == s && a == 'Q')
            total += 3;
        else if (b != s && a == 'Q')
            total += 3;

        if (b == s && a == 'J')
            total += 20;
        else if (b != s && a == 'J')
            total += 2;

        if (b == s && a == 'T')
            total += 10;
        else if (b != s && a == 'T')
            total += 10;

        if (b == s && a == '9')
            total += 14;
        else if (b != s && a == '9')
            total += 0;

        if (b == s && a == '8')
            total += 0;
        else if (b != s && a == '8')
            total += 0;

        if (b == s && a == '7')
            total += 0;
        else if (b != s && a == '7')
            total += 0;
    }

    cout << total;
    return 0;
}