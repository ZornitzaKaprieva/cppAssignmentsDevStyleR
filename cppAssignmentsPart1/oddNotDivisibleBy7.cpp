#include <iostream>
using namespace std;

// Да се отпечата сумата на нечетните числа в интервала от 1 до 100, които не се делят на 7;

int main()
{
    int result = 0;
    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 != 0 && i % 7 != 0)
        {
            // cout << "The odd numbers between 1 and 100 that are not divisible by 7: " << i << " " << endl;
            result += i;
        }
    }

    cout << "The sum of the odd numbers in the range 1 to 100 that are not divisible by 7 is " << result << "." << endl; // 2157

    return 0;
}