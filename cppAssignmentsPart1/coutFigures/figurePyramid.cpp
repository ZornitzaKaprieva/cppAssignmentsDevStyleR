#include <iostream>
using namespace std;

/*Принтиране на форма Pyramid*/
//     *
//    ***
//   *****
//  *******
// *********

int main()
{
    while (true)
    {
        int rows;
        char symbol;
        cout << "How many rows do you want the pyramid to be?: ";
        cin >> rows;
        cout << "Which symbol do you want to use in the pattern?: ";
        cin >> symbol;
        system("cls");

        int doubleRows = rows * 2;               // Удвояваме стойността, получена в rows, тъй като символите са нечетни на всеки ред => са по-голям брой от броя редове.
        for (int i = 1; i <= doubleRows; i += 2) // 1. Създаваме редовете на пирамидата, като правим инкрементацията през 2
        {
            for (int align = doubleRows - 1; align >= i; align -= 2) // 2. Подравняваме, за да получим форма на пирамида.
            {
                cout << " "; // Тъй като тук имаме декремантация, на 1ви ред ще се принтират най-много интервала, а на последния - най-малко. Така "избутваме" символите.
            }

            for (int j = 1; j <= i; j++) // 3.Попълваме създадените редове със символи.
            {
                cout << symbol;
            }

            cout << endl; // Ако не поставим нов ред след всяка итерация i, всички символи ще се изпишат на един ред, а не под формата на пирамида.
        }
    }
    return 0;
}