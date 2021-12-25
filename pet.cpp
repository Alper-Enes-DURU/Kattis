/* A program to find out who wins the food contest.
 * Link: https://open.kattis.com/problems/pet
 */

#include <iostream>
using namespace std;

int main()
{
    int max = 0;
    int contestantNumber;
    for(int i = 0; i < 5; i++)
    {
        int total = 0;
        for(int j = 0; j < 4; j++)
        {
            int x;
            cin >> x;
            total += x;
        }

        if(total > max)
        {
            max = total;
            contestantNumber = i + 1;
        }
    }

    cout << contestantNumber << " " << max;

    return 0;
}