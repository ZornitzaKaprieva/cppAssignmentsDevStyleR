#include <iostream>
using namespace std;

/*Судоку е изпратено за проверка на решението в неудобен формат:
3,5,2,4,6,9,7,8,1,6,9,7,1,8,5,9,3,2,,8,9,1,2,7,3,6,5,4,1,3,9,6,4,2,5,7,8,4,6,5,8,4,7,2,1,3,2,7,8,5,3,1,4,9,6,9,2,4,5,1,8,3,6,7,5,1,3,9,2,6,8,4,7,7,8,6,3,5,4,1,2,9

– Поставете го в едномерен масив, проверете дали размера е 81 и изпишете числата като 9х9 таблица за по-лесна проверка. (Можете да добавите сепаратори за малките 3х3 клетки. )
– Изпишете по колко от всяко число (1-9) има в масива.*/

int main()
{

    // 1. Поставяме судокуто  в едномерен масив и проверяваме дали размера е 81.

    int arr[] = {3, 5, 2, 4, 6, 9, 7, 8, 1, 6, 9, 7, 1, 8, 5, 9, 3, 2, 8, 9, 1, 2, 7, 3, 6, 5, 4, 1, 3, 9, 6, 4, 2, 5, 7, 8, 4, 6, 5, 8, 4, 7, 2, 1, 3, 2, 7, 8, 5, 3, 1, 4, 9, 6, 9, 2, 4, 5, 1, 8, 3, 6, 7, 5, 1, 3, 9, 2, 6, 8, 4, 7, 7, 8, 6, 3, 5, 4, 1, 2, 9};

    int length = sizeof(arr) / 4; // sizeof(arr) / sizeof(arr[0]);
    if (length != 81)
    {
        cout << "The elements in the array are not 81." << endl;
    }
    else
    {
        // 2. Прехвърляме елемнтите в двумерен масив (таблица 9х9).

        int matrix[9][9];
        int a = 0;
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                matrix[i][j] = arr[a];
                a++;
            }
        }

        // 3. Принтираме судокуто и добавяме сепаратори на всеки 3 реда и всеки 3 колони за малките 3х3 клетки.

        int countCols = 1;
        int countRows = 1;
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                cout << matrix[i][j] << " ";
                if (countCols == 3) // на всеки всеки 3 колони ще се добави допълнителен разделящ интервал
                {
                    cout << " ";
                    countCols = 0;
                }
                countCols++;
            }

            if (countRows == 3) // на всеки 3 реда ще се добави допълнителен разделящ нов ред
            {
                cout << endl;
                countRows = 0;
            }
            countRows++;

            cout << endl; // на всеки 9 реда ще се добави допълнителен разделящ нов ред
        }

        // 4. Преброяваме по колко от всяко число (1-9) има в масива.
        // За това условие създаваме нов for цикъл за повече прегледност, в който влагаме switch проверка, брояща числата от 1 до 9 в масива.
        int count1 = 0;
        int count2 = 0;
        int count3 = 0;
        int count4 = 0;
        int count5 = 0;
        int count6 = 0;
        int count7 = 0;
        int count8 = 0;
        int count9 = 0;
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                int num = matrix[i][j];
                switch (num)
                {
                case 1:
                    count1++;
                    break;
                case 2:
                    count2++;
                    break;
                case 3:
                    count3++;
                    break;
                case 4:
                    count4++;
                    break;
                case 5:
                    count5++;
                    break;
                case 6:
                    count6++;
                    break;
                case 7:
                    count7++;
                    break;
                case 8:
                    count8++;
                    break;
                case 9:
                    count9++;
                    break;

                default:
                    break;
                }
            }
        }

        // 5. Извеждаме подходящо съобщение.
        cout << "1 occurs " << count1 << " times in the array." << endl;
        cout << "2 occurs " << count2 << " times in the array." << endl;
        cout << "3 occurs " << count3 << " times in the array." << endl;
        cout << "4 occurs " << count4 << " times in the array." << endl;
        cout << "5 occurs " << count5 << " times in the array." << endl;
        cout << "6 occurs " << count6 << " times in the array." << endl;
        cout << "7 occurs " << count7 << " times in the array." << endl;
        cout << "8 occurs " << count8 << " times in the array." << endl;
        cout << "9 occurs " << count9 << " times in the array." << endl;

    } // END ELSE

    return 0;
}
