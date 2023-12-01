#include <iostream>
using namespace std;

/* Да се намери сумата на цифрите на всяко число в интервала от 100 – 999, които не завършват на 3.
Да се въведе число и да се провери, дали сумата на цифрите му съвпада със сумата на някое от числата в интервала.
Да изведе първото число, което отговаря на условието и изпълнението на програмата да приключи.*/

int main()
{

    /*РЕШЕНИЕ 2: В случай, че няма никакви зададени условия за въведеното от потребителя число */

    int input;
    cout << "Enter a number to be checked: ";
    cin >> input;

    // Не знаем колко са цифрите в input. Затова ги обхождаме с while цикъл и събираме всички цифри от числото:
    int inputSum = 0;
    int currentInput = input;
    while (currentInput != 0)
    {
        int lastDigit = currentInput % 10;
        inputSum += lastDigit;
        currentInput /= 10;
    }

    bool isMatch = false;
    for (int i = 100; i < 1000; i++)
    {

        int firstDigit = (i / 100) % 10;
        int secondDigit = (i / 10) % 10;
        int thirdDigit = i % 10;
        int result = firstDigit + secondDigit + thirdDigit;

        if (thirdDigit != 3)
        {

            if (result == inputSum) // Принтира се сумата на на цифрите на input и първото число от интервала, чиято сума от цифри съвпада с тази на input и изпълнението програмата приключва.
            {
                cout << "The sum of the digits of the number " << input << " is " << inputSum << "." << endl;
                cout << "It matches the sum of the digits of the number " << i << " - " << result << "." << endl;
                isMatch = true;
                break;
            }
        }
    }

    if (!isMatch)
    {
        cout << "Input sum is " << inputSum << "." << endl;
        cout << "There are no matches between the sums of the digits of these two numbers." << endl; // Принтира се, в случай, че не е открито съвпадение.
    }

    return 0;
}
