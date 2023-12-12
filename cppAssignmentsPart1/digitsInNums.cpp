#include <iostream>
#include <cmath>
using namespace std;

/*1.  Да се изведе броят на всички четирицифрени числа, чиито сбор от цифри е равен на 15 (1149, 1158…).
  2.  Да се изведат всички трицифрени числа, чиито цифри са еднакви (111, 222…).
  2а. Да се изведат всички трицифрени числа, съдържащи последователни цифри (123, 345…). */

int main()
{

    // при предварително въведени стойности:
    // int sizeOfArray = 10;
    // int arr[sizeOfArray] = {111, 2, 1149, 345, 2978, 666, 111, 888, 918, -1158};

    // при зададени от потребителя стойности:
    while (true)
    {
        int sizeOfArray, value;
        int arr[100];
        cout << "Enter size of array: ";
        cin >> sizeOfArray;
        cout << "Enter " << sizeOfArray << " numbers: " << endl;
        for (int i = 0; i < sizeOfArray; i++)
        {
            cin >> value;
            arr[i] = value;
        }
        system("cls");

        int count15 = 0;
        int countSameDigits = 0;
        int countConsecutiveDigits = 0;
        for (int i = 0; i < sizeOfArray; i++)
        {
            int fourthDigit = arr[i] % 10;
            int thirdDigit = (arr[i] / 10) % 10;
            int secondDigit = (arr[i] / 100) % 10;
            int firstDigit = (arr[i] / 1000) % 10;

            if (firstDigit != 0) // Проверяваме дали числото е 4-цифрено.
            {
                int sumOfDigits = abs(firstDigit + secondDigit + thirdDigit + fourthDigit); // Събираме цифрите на числото и намираме абсолютната стойност.

                if (sumOfDigits == 15)
                {
                    cout << "The sum of the digits in " << arr[i] << " is " << sumOfDigits << "." << endl;
                    count15++; // Броим колко път се срещат цифри, чийто сбор е 15.
                }
            }

            if (firstDigit == 0 && secondDigit != 0) // Проверяваме дали числото е 3-цифрено.
            {
                if (secondDigit == thirdDigit && thirdDigit == fourthDigit)
                {
                    cout << "All the digits in " << arr[i] << " are the same." << endl;
                    countSameDigits++; // Броим колко пъти се срещат 3-цифрени числа с еднакви цифри.
                }

                if (secondDigit + 1 == thirdDigit && thirdDigit + 1 == fourthDigit)
                {
                    cout << "The digits in " << arr[i] << " are consecutive." << endl;
                    countConsecutiveDigits++; // Броим колко пъти се срещат 3-цифрени числа с последователни цифри.
                }
            }
        }

        // Принтираме по колко числа отговарят на всяко от условията. В противен случай се извежда подходящо съобщение.
        if (count15 == 0) // 4-цифрени, чийто сбор от цифри е 15
        {
            cout << "There are no 4-digit numbers whose sum of digits is 15." << endl;
        }
        else
        {
            count15 == 1 ? cout << "There is " << count15 << " 4-digit number whose sum of digits is 15." << endl : cout << "There are " << count15 << " 4-digit numbers whose sum of digits is 15." << endl;
        }

        if (countSameDigits == 0) // 3-цифрени, чиито цифри са еднакви
        {
            cout << "There are no 3-digit numbers whose digits are the same." << endl;
        }
        else
        {
            countSameDigits == 1 ? cout << "There is " << countSameDigits << " 3-digit number whose digits are the same." << endl : cout << "There are " << countSameDigits << " 3-digit numbers whose digits are the same." << endl;
        }

        if (countConsecutiveDigits == 0) // 3-цифрени, чиито цифри са последователни
        {
            cout << "There are no 3-digit numbers whose digits are consecutive." << endl;
        }
        else
        {
            countConsecutiveDigits == 1 ? cout << "There is " << countConsecutiveDigits << " 3-digit number whose digits are consecutive." << endl : cout << "There are " << countConsecutiveDigits << " 3-digit numbers whose digits are consecutive." << endl;
        }
    } // END WHILE

    return 0;
}