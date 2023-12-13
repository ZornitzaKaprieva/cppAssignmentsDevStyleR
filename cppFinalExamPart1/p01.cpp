#include <iostream>
#include <cmath>
using namespace std;

/*1. Дадено e числото N. 
Да се напише програма която определя дали N се дели на 9 и 11 едновременно. 
N се въвежда от клавиатурата. Резултатът се извежда на екрана.*/

int main()
{

    while (true) // с while цикъл програмата няма да приключи, след като изведе резултатът, а ще може отново да се въведе число за проверка
    {
        int num; // инициализираме променлива

        cout << "Enter a number:";
        cin >> num; // потребителят въвежда число

        system("cls"); // изчистваме конзолата

        // с if...else конструкция проверяваме дали въведеното число се дели на 9 и 11 едновременно.
        if (num % 9 == 0 && num % 11 == 0)
        {
            cout << num << " is divisible by 9 and 11 simultaneously" << endl;
        }
        else
        {
            cout << num << " is not divisible by 9 and 11 simultaneously" << endl;
        }

    } // END WHILE
    return 0;
}