/* A program to calculate Actual Beats per minute of heart.
 * Link: https://open.kattis.com/problems/heartrate
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        int b;
        double p;

        cin >> b >> p;

        double bpm = (60 * b) / p;
        double abpm = 60 / p;
        
        cout << fixed << setprecision(4);
        cout << bpm - abpm << " " << bpm << " " << bpm + abpm << endl; 
    }

    return 0;
}