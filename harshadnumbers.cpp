/* A program to find if the number is divisible by 
 * its digits total.
 * Link: https://open.kattis.com/problems/harshadnumbers
 */

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    bool isNotHarshadNumber = true;
    while(isNotHarshadNumber)
    {
        int x = n;
        int digitsSum = 0;
        while(x > 0)
        {
            digitsSum += x % 10;
            x /= 10;
        }
        digitsSum += x;

        if(n % digitsSum == 0)
        {
            cout << n;
            isNotHarshadNumber = false;
        }
        else
        {
            n++;
        }
    }

    return 0;
}