/* A program to print the input text 3 times.
 * Link: https://open.kattis.com/problems/echoechoecho
 * "Your program will be given as input a single word, and it should print 
 * out that word three times, separating the words with spaces."
 */

#include <iostream>
using namespace std;

int main ()
{
    // get the text from the user.

    string word;
    cin >> word;

    // print the text 3 times to the user.
    
    cout << word << " " << word << " " << word;
    return 0;
}