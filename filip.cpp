/* A program to reverse a number.
 * Link: https://open.kattis.com/problems/filip
 */

#include <iostream>
using namespace std;

int reversDigits(int num) 
{ 
    int reversedNumber = 0, remainder;

    while(num!= 0) {
        remainder = num % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        num /= 10;
    }

    return reversedNumber; 
} 

int main()
{
    int a, b;
    cin >> a >> b;

    int revA = reversDigits(a), 
        revB = reversDigits(b);

    if(revA > revB)
    {
        cout << revA;
    }
    else
    {
        cout << revB;
    }

    return 0;
}