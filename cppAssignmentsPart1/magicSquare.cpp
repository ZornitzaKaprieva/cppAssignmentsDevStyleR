#include <iostream>
#include <cmath>
using namespace std;

/*Една квадратна таблица от числа се нарича магически квадрат, когато е изпълнено следното условие:
всички суми, получени поотделно от сбора на елементите по всеки ред/всеки стълб/всеки от двата диагонала са равни.
Да се състави програма на C++, която въвежда естествени числа от интервала [1..20] в дадена квадратна таблица
и определя дали те образуват магически квадрат.
Пример:
16, 3,  2, 13
5, 10, 11,  8
9,  6,  7, 12
4, 15, 14,  1
Изход: магически квадрат, сума по редове и колони 34*/

int main()
{
    // 1. Създаваме квадратна таблица с предварително зададени стойности:
    // int size = 4;
    // int matrix[size][size] = {
    //     {16, 3, 2, 13},
    //     {5, 10, 11, 8},
    //     {9, 6, 7, 12},
    //     {4, 15, 14, 1}};

    while (true) // за да не приключва програмата първото въвеждане.
    {
        // 1. Създаваме квадратна таблица със зададени стойности от потребител:
        int size, value;
        cout << "Enter matrix size: ";
        cin >> size;

        int **matrix = new int *[size]; // Може да бъде заменено с int matrix[100][100]; и нуждата от for отпада.
        for (int i = 0; i < size; i++)
        {
            matrix[i] = new int[size];
        }

        for (int i = 0; i < size; i++) // 1.2. Въвеждаме стойностите на елементите от основната матрица.
        {
            cout << "Enter Values for row " << i + 1 << ": \n";
            for (int j = 0; j < size; j++)
            {
                cin >> matrix[i][j];
            }
        }

        // 2. Извеждаме елементите от таблицата.

        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }

        bool isMagicSquare = true; // Създаваме flag.
        system("cls");             // за да се изчиства конзолата.

        // 2.1 Извеждаме елементите от първия ред на таблицата и намираме техния сбор. Този сбор ще го използваме за сравнение.
        int finalResult = 0;
        for (int i = 0; i < 1; i++)
        {
            int r = 0, r2 = i;
            for (int j = 0; j < size; j++)
            {
                // cout << "Row1: " << matrix[r2][r] << " ";
                finalResult += matrix[r2][r];
                r++;
            }
        }

        // 2.2. Извеждаме елементите от редовете на таблицата. Сравняваме сбора на елементите от всеки ред със сбора на елементите от първия ред .
        int resultRows = 0;
        for (int i = 0; i < size; i++)
        {
            int r = i, r2 = 0;
            for (int j = 0; j < size; j++)
            {
                // cout << matrix[r][r2] << " ";
                resultRows += matrix[r][r2];
                // cout << "resultRows: " << resultRows << " ";
                r2++;
            }
            if (finalResult != resultRows)
            {
                // cout << "ROWS: This table does not meet the requirements for a magic square." << endl;
                isMagicSquare = false;
                break;
            }
            resultRows = 0;
            // cout << endl;
        }

        // 2.3. Извеждаме елементите от колоните на таблицата. Сравняваме сбора на елементите от всяка колона със сбора на елементите от първия ред .

        int c = 0, resultCols = 0;

        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                // cout << "Cols: " << matrix[j][c] << " ";
                resultCols += matrix[j][c];
            }

            c++;
            // cout << "RESULT cols: " << resultCols << endl;
            if (finalResult != resultCols)
            {
                // cout << "COLS: This table does not meet the requirements for a magic square." << endl;
                isMagicSquare = false;
                break;
            }
            resultCols = 0;
            // cout << endl;
        }

        // 2.4.  Извеждаме елементите от диагонала (от ляво на дясно)
        int resultLeftDiagonal = 0;

        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < 1; j++)
            {
                // cout << "leftDiagonal: " << matrix[i][i] << " ";
                resultLeftDiagonal += matrix[i][i];
            }
            // cout << "resultLeftDiagonal: " << resultLeftDiagonal << endl;;
            // cout << endl;
        }

        if (finalResult != resultLeftDiagonal)
        {
            // cout << "LEFT DIAGONAL: This table does not meet the requirements for a magic square." << endl;
            isMagicSquare = false;
        }

        // 2.5. Извеждаме елементите от диагонала (от дясно на ляво). //TODO
        int colsDiagonal = size - 1, rowsDiagonal = 0, resultRightDiagonal = 0;

        while (rowsDiagonal <= size && colsDiagonal >= 0)
        {
            // cout << "rightDiagonal: " << matrix[rowsDiagonal][colsDiagonal] << " " << endl;
            resultRightDiagonal += matrix[rowsDiagonal][colsDiagonal];
            colsDiagonal--;
            rowsDiagonal++;
        }

        if (finalResult != resultRightDiagonal)
        {
            // cout << "RIGHT DIAGONAL: This table does not meet the requirements for a magic square." << endl;
            isMagicSquare = false;
        }

        // 3. Ако никъде finalResult не се различава от resultRightDiagonal, то таблицата е магически квадрат.

        if (isMagicSquare)
        {
            cout << "The table is a magic square and the sum of each row, column and diagonal is " << finalResult << endl;
        }
        else
        {
            cout << "The table is not a magic square.\n";
        }
    } // END WHILE
    return 0;
}