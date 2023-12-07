#include <iostream>
using namespace std;

/*Създайте масив от n елемента, съдържащ само 3-цифрени числа.
Да се изведат всички елементи, чиято сума от цифри е равна на 9.
Ако не, да се изведе съобщение, че няма такива елементи.*/

int main()
{
    while (true) // По този начин програмата не приключва и имаме възможност да въведем следващи стойности.
    {
        int sizeOfArr = 100; 
        int arr[sizeOfArr]; //Инициализираме масив с определен размер. 

        int n; // Определяме броя на елементите в масива, които следва да въведем.
        cout << "How many elements of the array will you enter?: ";
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            cout << "Enter an array element value: ";
            cin >> arr[i]; // Въвеждаме стойността на елементите в масива.
        }

         system("cls"); // Изчистваме конзолата след всяка проверка. 

        int counter9 = 0;
        int currentNumSum = 0;
        for (int i = 0; i < n; i++) // Обхождаме елементите в масива.
        {
            int lastDigit = arr[i] % 10;
            int middleDigit = arr[i] / 10 % 10;
            int firstDigit = arr[i] / 100 % 10;
            currentNumSum = abs(lastDigit + middleDigit + firstDigit); // Намираме сбора на абсолютната стойност на 3те цифри от всеки един елемент. 

            if (currentNumSum == 9) // Ако сборът е равен на 9, извеждаме съобщение за съответния елемент. 
            {
                cout << "The sum of the digits in " << arr[i] << " is " << currentNumSum << "." << endl;
                counter9++; //Броим колко елемента отговарят на това условие.
            }
        }

        if (counter9 == 0) // Ако няма елементи, чийто сбор на цифрите е 9, извеждаме подходящо съобщение. 
        {
            cout << "There is no element whose sum of digits is 9." << endl;
        }
    }

    return 0;
}