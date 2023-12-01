#include <iostream>
using namespace std;

int main()
{
    float celsius;
    cout << "Enter degrees Celsius: ";
    cin >> celsius;

    float fahrenheit = (celsius * 1.8) + 32;

    cout << celsius << " degrees Celsius equals " << fahrenheit << " degrees Fahrenheit." << endl;

    return 0;
}