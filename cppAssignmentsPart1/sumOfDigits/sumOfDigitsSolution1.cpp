#include <iostream>
using namespace std;

/* Да се намери сумата на цифрите на всяко число в интервала от 100 – 999, които не завършват на 3.
Да се въведе число и да се провери, дали сумата на цифрите му съвпада със сумата на някое от числата в интервала.
Да изведе първото число, което отговаря на условието и изпълнението на програмата да приключи.*/

int main()
{

    /*РЕШЕНИЕ 1: В случай, че условията за въведеното число от потребителя са същите като тези за числата от интервала: да е от 100 – 999 и да не завършва на 3:*/

    int input;
    cout << "Enter a 3 digit number to be checked: ";
    cin >> input;

    /*С while цикъл проверяваме, дали въведеното число отговаря на условията:*/
    while (input % 10 == 3 || input < 100 || input > 999)
    {
        cout << input << " is invalid input.\nInput should be between 100 and 999 and its last digit should not be 3." << endl;
        system("cls");
        cout << "Enter a 3 digit number to be checked: ";
        cin >> input;
    }

    for (int i = 100; i < 1000; i++)
    {
        // cout << "100 to 999: " << i << endl; // принтира всички числа от интервала

        int firstDigit = (i / 100) % 10;
        int secondDigit = (i / 10) % 10;
        int thirdDigit = i % 10;
        int result = firstDigit + secondDigit + thirdDigit;
        // cout << firstDigit << " + " << secondDigit << " + " << thirdDigit << " = " << result << endl; // принтира сумата на цифрите на всяко число

        if (thirdDigit != 3)
        {
            // cout << firstDigit << " + " << secondDigit << " + " << thirdDigit << " = " << result << endl; // принтира сумата на цифрите на всяко число, което не завършва на 3.

            int inputFirstDigit = (input / 100) % 10;
            int inputSecondDigit = (input / 10) % 10;
            int inputLastDigit = input % 10;
            int inputSum = inputFirstDigit + inputSecondDigit + inputLastDigit;

            if (result == inputSum) // Принтира се сумата на на цифрите на input и първото число от интервала, чиято сума от цифри съвпада с тази на input и изпълнението програмата приключва.
            {
                cout << "The sum of the digits of the number " << input << " is " << inputSum << "." << endl;
                cout << "It matches the sum of the digits of the number " << i << " - " << result << "." << endl;
                break;
            }
        }
    }

    return 0;
}