#include <iostream>
#include <cmath>
using namespace std;

/*3. Даден е едномерен масив А[n].
Напишете програма която намира броят на елементите с положителна стойност.
N и елементите на масива се въвеждат от клавиатурата. Резултатът се извежда на екрана.*/

int main()
{

    while (true) // с while цикъл програмата няма да приключи, след като изведе резултатът, а ще може отново да се въведат числа за проверка
    {

        // Създаваме едномерен масив и позволяваме на потребителя да въведе големината на масива и неговите стойности
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
        system("cls"); // изчистваме конзолата

        int counter = 0;
        for (int i = 0; i < sizeOfArray; i++)
        {
            if (arr[i] > 0) // Проверяваме дали елементът е положително число
            {
                // cout << arr[i] << endl;
                counter++; // увеличаваме counter с едно всеки път, когато дадено число отговаря на условието
            }
        }
        cout << counter << endl; // Извеждаме колко са числата, отговарящи на условието

    } // END WHILE

    return 0;
}