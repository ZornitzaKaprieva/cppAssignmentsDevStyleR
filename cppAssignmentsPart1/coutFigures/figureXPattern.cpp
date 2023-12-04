#include <iostream>
using namespace std;

/*Принтиране на форма X Pattern*/
// *   *
//  * *
//   *
//  * *
// *   *

int main()
{
    int times;
    cout << "How many times do you want to print the pattern?:" << endl;
    cin >> times;

    string row1 = "*   *";
    string row2 = " * * ";
    string row3 = "  *  ";
    string mainPattern = row1 + "\n" + row2 + "\n" + row3 + "\n" + row2 + "\n" + row1 + "\n";

    for (int i = 1; i <= times; i++) // шаблонът се поватря толкова пъти, колкото е въведеното число.
    {
        cout << mainPattern << endl;
    }

    return 0;
}