#include <iostream>
#include <string>
using namespace std;

/*Напишете функции за:
1. Четене на стринг въведен от клавиатурата, който да се изпише отзад-напред;
2. Преброяване на броя на гласните в дълго изречение (англ.) и изписване на резултата.*/

string enterText() // връща въведния стринг, който може да се използва и в двете функции;
{
    string str;
    cout << "Enter some text: ";
    getline(cin, str);

    return str;
}

void reverseText(string str) // 2. Преброяване на гласните: използваме въведения стринг от string enterText();
{
    cout << "Reversed, this text looks like this: ";

    int length = str.length();
    for (int i = length - 1; i >= 0; i--)
    {
        cout << str.at(i);
    }
    cout << endl;
}

int main()
{
    reverseText(enterText()); // можем да използваме въведения стринг от string enterText();

    return 0;
}