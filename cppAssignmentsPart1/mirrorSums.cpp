#include <iostream>
#include <array>
#include <bits/stdc++.h>
using namespace std;

/* Даден е целочислен масив с 14 елемента (въведете ги)
* Ако последният елемент на масива е четно число, игнорирайте елементите на четни индекси; в противен случай - игнорирайте нечетните индекси
* Подредете оставащите елементи по големина, в низходящ ред
* Сумирайте огледалните елементи (първия с последния, втория с предпоследния,...) и изведете на екрана, във възходящ ред, тези суми, които са по-големи от средния елемент
* ако няма такива суми, изведете информативно съобщение
пример:
- първоначалният масив е 10 0 12 85 -5 8 3 -9 12 -78 6 65 9 3
- последният елемент е 3 (нечетно число) - следователно запазваме елементите на четни индекси: 10 12 -5 3 12 6 9
- подреждаме ги по големина, низходящо: 12 12 10 9 6 3 -5
- сумираме огледалните елементи: 12 + (-5) , 12 + 3 , 10 + 6
- на екрана се извеждат във възходящ ред тези суми, които са по-големи от средния елемент (9) : 15 16*/

int main()
{
    // 1. Създаваме масив:
    int sizeOfArr = 14;

    // с предварително зададени стойности:
    // int arr[sizeOfArr] = {45, 654, -87, -756, 68, 94, 13, 65, 759, 46, 38, 25, 78, 65}; //{12, 0, 10, 85, -5, 8, 6, -9, 12, -78, 3, 65, 9, 3}; //{-202, -322, 33, 44, 55, 66, 177, 88, 99, 110, 111, 112, 113, 115};

    // със зададени стойности от потребител:
    int arr[sizeOfArr];
    int countValues = 14, value;
    for (int i = 0; i < sizeOfArr; i++)
    {
      cout << "Enter " << countValues << " values: ";
      cin >> value;
      arr[i] = value;
      countValues--;
    }

    cout << "The elements in the array are:" << endl;
    for (int i = 0; i < sizeOfArr; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // 2.Намираме кой е последният елемент и проверяваме дали е четен.

    int lastElement = arr[sizeOfArr - 1];
    if (lastElement % 2 == 0)
    {
        cout << "The last element in the array is even: " << lastElement << endl;
    }
    else
    {
        cout << "The last element in the array is odd: " << lastElement << endl;
    }

    // 3.Създаваме нов масив (с размер наполовина на основния), в който ще отделим валидните числа (на четни или нечетни индекси).
    // 3.1.Създаваме променлива k, която ще използваме за въвеждане на стойностите в новия масив.

    int newSize = sizeOfArr / 2;
    int newArr[newSize];
    int k = 0;

    if (lastElement % 2 != 0) // при нечетен последен елемент
    {
        for (int i = 0; i < sizeOfArr; i += 2)
        {
            // cout << arr[i] << endl;
            newArr[k] = arr[i];
            k++;
        }
    }
    else // при четен последен елемент
    {
        for (int i = 1; i < sizeOfArr; i += 2)
        {
            // cout << arr[i] << endl;
            newArr[k] = arr[i];
            k++;
        }
    }

    // 4. Сортираме числата в новия масив по големина по големина в низходящ ред и намираме средния елемент.

    sort(newArr, newArr + newSize, greater<int>());
    int middleElement = newArr[newSize / 2];
    // cout << "The middle element in the new array is: " << middleElement << endl;

    cout << "The values in the new array are: " << endl;
    for (int i = 0; i < newSize; i++)
    {
        cout << newArr[i] << " ";
    }
    cout << endl;

    // 5. Сумираме огледалните елементи (първия с последния, втория с предпоследния,...)
    // 5.1 Намираме тези суми, които са по-големи от средния елемент и добавяме в нов масив final[].
    // 5.2. Тъй като не знаем колко стойности ще попаднат в този масив, първо ще ги преброим (с sizeFinal++).

    int mirrorLast = newSize - 1;
    int sizeFinal = 0;
    int final[sizeFinal];
    int f = 0;

    for (int i = 0; i < newSize / 2; i++)
    {
        // cout << "First: " << newArr[i] << " + Last: " << newArr[mirrorLast] << " = " << newArr[i] + newArr[mirrorLast] << endl;
        if ((newArr[i] + newArr[mirrorLast]) > middleElement)
        {
            int result = newArr[i] + newArr[mirrorLast];
            cout << newArr[i] << " + " << newArr[mirrorLast] << " = " << result << endl;
            final[f] = result;
            f++;
            sizeFinal++;
        }
        mirrorLast--;
    }

    // 6. Ако никоя от получените суми не е по-голяма от средния елемент, извеждаме подходящо съобщение.
    // В противен случай извеждаме елементите, отговарящи на условието във възходящ ред.

    if (sizeFinal == 0)
        cout << "There are no array elements whose sum is greater than " << middleElement << " (the middle element)." << endl;

    cout << "Array elements whose sum is greater than " << middleElement << " (the middle element) are:" << endl;
    sort(final, final + sizeFinal);
    for (int i = 0; i < sizeFinal; i++)
    {
        cout << final[i] << endl;
    }
    return 0;
}