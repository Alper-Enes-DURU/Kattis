/*
 * A program to find the length of the pyramid based
 * on the given number of blocks.
 * Link: https://open.kattis.com/problems/pyramids
 */

#include <iostream>
using namespace std;

int findHeight(int n);

int main()
{
    int n;
    cin >> n;
    cout << findHeight(n);
    
    /*
        For testing:

        assert(findHeight(1) == 1);
        assert(findHeight(0) == 0);
        assert(findHeight(4) == 1);
        assert(findHeight(10) == 2);
        assert(findHeight(15) == 2);
        assert(findHeight(35) == 3);
        assert(findHeight(34) == 2);
        assert(findHeight(83) == 3);
        assert(findHeight(84) == 4);
    */
    return 0;
}

int findHeight(int n)
{
    int start = 1, height = 0, total = 0;

    if (n == 1)
    {
        height = 1;
    }
    else
    {
        while ((total = total + (start * start)) <= n)
        {
            height += 1;
            start += 2;
        }
    }

    return height;
}