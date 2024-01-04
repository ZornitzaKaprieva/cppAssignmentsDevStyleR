#include <iostream>
using namespace std;

/*Напишете функция за намиране на най-голямото от 3 числа.*/

void findBiggestNum(int num1, int num2, int num3)
{
    cout << "Of the numbers " << num1 << ", " << num2 << " and " << num3 << ", the biggest is ";
    if (num1 >= num2 && num1 >= num3)
    {
        cout << num1;
    }
    else if (num2 >= num1 && num2 >= num3)
    {
        cout << num2;
    }
    else if (num3 >= num1 && num3 >= num2)
    {
        cout << num3;
    }
    cout << "." << endl;
}

int main()
{
    int num1, num2, num3;
    cout << "Enter 3 numbers: " << endl;
    cin >> num1 >> num2 >> num3;
    findBiggestNum(num1, num2, num3);

    return 0;
}