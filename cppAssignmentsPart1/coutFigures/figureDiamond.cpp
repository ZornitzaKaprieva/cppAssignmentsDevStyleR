#include <iostream>
using namespace std;

/*Принтиране на форма Diamond*/
//     *
//    ***
//   *****
//  *******
// *********
//  *******
//   *****
//    ***
//     *

int main()
{
    int rows;
    cout << "How many rows do you want the diamond to be? Enter an odd number:" << endl;
    cin >> rows;

    while (rows % 2 == 0) // Проверяваме дали въведеният брой редове е четен.
    {
        cout << "Enter an odd number:" << endl;
        cin >> rows;
    }

    // FOR1 (increment): подравняваме горната част на диаманта (под формата на пирамида).
    for (int i = 1; i <= rows; i += 2)
    {
        for (int align = rows - 1; align >= i; align -= 2)
        {
            cout << " ";
        }

        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // FOR2 (decrement): Създаваме долните редове на диаманта (под формата на обърната пирамида), като пропускаме най-дългия ред.
    for (int i = rows - 2; i >= 1; i -= 2)
    {
        for (int align = rows - 1; align >= i; align -= 2)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}