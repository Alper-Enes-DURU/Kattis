/*
    A program to find how much weight you trailer needs to be
depending on the things you pick up to the trip.
    Link: https://open.kattis.com/problems/gcvwr
*/

#include <iostream>
using namespace std;

int main()
{
    int g, t, n;
    int totalWeightYouWantToBring = 0;
    int maxPossibleWeight;
    cin >> g >> t >> n;

    for(int i = 0; i < n; i++)
    {
        int w;
        cin >> w;
        totalWeightYouWantToBring += w;
    }
    maxPossibleWeight = ((g - t) * 9) / 10;

    cout << maxPossibleWeight - totalWeightYouWantToBring;

    return 0;
}