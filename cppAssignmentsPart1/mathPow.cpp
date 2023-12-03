#include <iostream>
#include <cmath>

using namespace std;

/*Въвеждане на число и степен от клавиатурата.
Отпечатване на всички числа от 1 до въведеното число, които повдигнати на въведената степен са по-малки от числото.*/

int main()
{

    int num;
    int power;

    cout << "Enter a number: "; 
    cin >> num; //1. Въвеждаме число.

    cout << "Enter a power: ";
    cin >> power; //2. Въвеждаме степен, на която ще повдигаме числата.

    cout << "Numbers raised to " << power << " that are less than " << num << ":" << endl;
    for (int i = 1; i <= num; i++) // 3. Преминаваме през всички числа от 1 до въведеното число, 
    {

        int powNum = pow(i, power); // 4. Повдигаме всяко число на въведената степен. 
        

        while (num > powNum) // 5. Проверяваме дали текущото число, повдигнато на въведената степен, е по-малко от въведеното число.
        {
            cout << i << " (raised to " << power << " is equal to " << powNum << ")" << endl;
            break;
        }
    }

    return 0;
}