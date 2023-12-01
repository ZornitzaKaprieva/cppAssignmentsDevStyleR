#include <iostream>
using namespace std;

/* Да се намери сумата на цифрите на всяко число в интервала от 100 – 999, които не завършват на 3.
Да се въведе число и да се провери, дали сумата на цифрите му съвпада с въведеното от потребителя число.
Да изведе първото число, което отговаря на условието и изпълнението на програмата да приключи.*/

int main()
{

    /*РЕШЕНИЕ 3: В случай, че проверяваме, дали въведеното от потребителя число е равно на някоя от получените суми*/

    int input;
    cout << "Enter a number to be checked: ";
    cin >> input;

    bool isMatch = false;
    for (int i = 100; i < 1000; i++)
    {
        int firstDigit = (i / 100) % 10;
        int secondDigit = (i / 10) % 10;
        int thirdDigit = i % 10;
        int result = firstDigit + secondDigit + thirdDigit;

        if (thirdDigit != 3)
        {
            if (result == input) // Принтира се сумата на на цифрите на input и първото число от интервала, чиято сума от цифри съвпада с въведеното от потребителя число и изпълнението програмата приключва.
            {
                cout << "The number is " << input << "." << endl;
                cout << "There is a match between the entered number and the sum of the digits of " << i << ", which is " << result << "." << endl;
                isMatch = true;
                break;
            }
        }
    }

    if (!isMatch)
    {
        cout << "Input sum is " << input << "." << endl;
        cout << "None of the digit sums of a number in the range match the number entered." << endl; // Принтира се, в случай, че не е открито съвпадение.
    }

    return 0;
}