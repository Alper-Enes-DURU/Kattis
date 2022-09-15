/*
 * A program to find the minimum and maximum number that is between the input 
 * L and D.
 * Link: https://open.kattis.com/problems/zamka
 */

#include <iostream>
using namespace std;

int main()
{
    int l, d, x;
    cin >> l >> d >> x;

    int min = d, max = l;

    for (int start = l; start <= d; start++)
    {
        int num = start, digits = 0;
        while (num > 0)
        {
            digits += num % 10;
            num /= 10;
        }
        
        if (start > max && digits == x)
            max = start;
        
        if (start < min && digits == x)
            min = start;
    }

    cout << min << endl << max;
    return 0;
}