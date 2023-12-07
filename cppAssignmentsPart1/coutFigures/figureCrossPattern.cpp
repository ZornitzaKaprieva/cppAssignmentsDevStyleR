#include <iostream>
using namespace std;

/*Принтиране на форма Cross Pattern*/
//   *
//   *
// *****
//   *
//   *

int main()
{
    while (true)
    {

        int rows;
        cout << "How many rows do you want the pattern to be?:" << endl;
        cin >> rows;
        system("cls");

        for (int i = 1; i <= rows; i++) // Създаваме вертикалните * на формата.
        {
            for (int align = 2; align >= 1; align--) // "Избутваме" * на всеки 1ви и 2ри ред, за да спазим формата на кръст.
            {
                if (i % 3 != 0)
                {
                    cout << ' ';
                }
            }

            if (i % 3 == 0) // На всеки 3ти ред принтираме допълнително по 4 * на ред, за да спазим формата на кръст .
            {
                for (int j = 1; j <= 4; j++)
                {
                    cout << '*';
                }
            }

            cout << '*' << endl;
        }
    }
    return 0;
}