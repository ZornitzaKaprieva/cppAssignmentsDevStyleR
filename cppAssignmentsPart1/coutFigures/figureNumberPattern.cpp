#include <iostream>
using namespace std;

/*Принтиране на форма Number Pattern*/
// 1
// 22
// 333
// 4444
// 55555

int main()
{
    int rows;
    cout << "How many rows do you want the pattern to be?" << endl;
    cin >> rows;

    for (int i = 1; i <= rows; i++) // Правим толкова итерации, колкото следва да са редовете на формата.
    {
        for (int j = 1; j <= i; j++) // Заявяваме, че броят числа в ред следва да отговаря на броя на реда.
        {
            cout << i; // 122333444455555...
            // cout << j; //112123123412345...
        }

        cout << endl; // ако не поставим нов ред след всяка итерация i, всички числа ще се изпишат на един ред, а не като търсената форма.
    }

    return 0;
}