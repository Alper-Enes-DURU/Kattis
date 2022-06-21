/* A program to find out the biggest piece of the cake after the initial cut.
 * Link: https://open.kattis.com/problems/pieceofcake2
 */

#include <iostream>
using namespace std;

const int HEIGHT_OF_THE_CAKE = 4;

int main()
{
    int n, h, v;
    int volumeOfTheCake;
    cin >> n >> h >> v;

    int area1 = h * (n - v);
    int area2 = v * (n - h);
    int area3 = (n - v) * (n - h);

    if (area1 > area2 && area1 > area3)
        volumeOfTheCake = area1 * HEIGHT_OF_THE_CAKE;
    else if (area1 > area2 && area1 < area3)
        volumeOfTheCake = area3 * HEIGHT_OF_THE_CAKE;
    else if (area2 > area1 && area2 > area3)
        volumeOfTheCake = area2 * HEIGHT_OF_THE_CAKE;
    else if (area2 > area1 && area2 < area3)
        volumeOfTheCake = area3 * HEIGHT_OF_THE_CAKE;
    else if (area3 > area1 && area3 > area2)
        volumeOfTheCake = area3 * HEIGHT_OF_THE_CAKE;
    else if (area3 > area1 && area3 < area2)
        volumeOfTheCake = area2 * HEIGHT_OF_THE_CAKE;
       
    cout << volumeOfTheCake;
    
    return 0;
}