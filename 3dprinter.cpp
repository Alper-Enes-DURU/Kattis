/* A program to find the days needed to build statues.
 * Link: https://open.kattis.com/problems/3dprinter
 */

#include <iostream>

using namespace std;

int main()
{
  int n;
  cin >> n;
  
  int days = 1;
  
  while (n > 1)
  {
    if (n % 2 == 0)
      n /= 2;
    else
      n = (n + 1) / 2;
      
    days++;
  }
  
  cout << endl << days << endl;
}
