#include <iostream>
using namespace std;

/*Принтиране на форма Hourglass*/
// *********
//  *******
//   *****
//    ***
//     *

int main()
{
    while (true)
    {

        int rows;
        char symbol;
        cout << "How many rows do you want the hourglass to be?: ";
        cin >> rows;
        cout << "Which symbol do you want to use in the pattern?: ";
        cin >> symbol;
        system("cls");

        int doubleRows = rows * 2;                   // Удвояваме стойността, получена в rows, тъй като символите са нечетен брой на всеки ред => са по-голям брой от броя редове.
        for (int i = doubleRows - 1; i >= 1; i -= 2) // 1. Създаваме редовете на обърнатата пирамида, като правим декрементацията през 2
        {

            for (int align = doubleRows - 1; align > i; align -= 2) // 2. Подравняваме под формата на обърната пирамида.
            {
                cout << " ";
            }

            for (int j = 1; j <= i; j++) // 3. Попълваме създадените редове със символи.
            {
                cout << symbol;
            }

            cout << endl; // Ако не поставим нов ред след всяка итерация i, всички символи ще се изпишат на един ред, а не под формата на пирамида
        }
    }
    return 0;
}