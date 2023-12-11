#include <iostream>
using namespace std;

/* Да се въведе кой ден от седмицата е 01.01 и дали годината е високосна.
Да се въведе дата (ден + месец) и да се намери кой ден от седмицата е.*/

int main()
{

    string months[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    string dayOfWeek[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

    // Въвеждаме информация за 1ви януари и проверяваме валидността на въведените стойности:

    int dayOfWeek1Jan;
    do
    {
        cout << "Enter what day of the week is January 1st (1 for Monday [...] 7 for Sunday): ";
        cin >> dayOfWeek1Jan;
    } while (dayOfWeek1Jan < 1 || dayOfWeek1Jan > 7);

    dayOfWeek1Jan = dayOfWeek1Jan - 1; // за да може да въведем 1 за понеделник и т.н., но да започнем масива от 0;

    int leapYear; // 0/1
    cout << "Is leap year? (0-1): ";
    cin >> leapYear;
    while (leapYear != 0 && leapYear != 1)
    {
        cout << "Is leap year? (0-1): ";
        cin >> leapYear;
    }

    // Извеждаме колко дни има всеки месец, като съобразявме, дали е високосна година.
    int monthsSize[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    monthsSize[1] += leapYear;

    cout << months[0] << " 1st is in " << dayOfWeek[dayOfWeek1Jan] << endl;

    // Въвеждаме желания ден + Проверяваме валидността на въведените стойности:
    int monthToCheck;
    int dayToCheck;

    do
    {
        cout << "Enter month to check: ";
        cin >> monthToCheck;
    } while (monthToCheck < 1 || monthToCheck > 12);

    int thisMonthSize = monthsSize[monthToCheck - 1]; // задаваме колко дни е този месец, за да направим проверка за валидност.
    do
    {
        cout << "Enter day to check: ";
        cin >> dayToCheck;
    } while (dayToCheck < 1 || dayToCheck > monthsSize[monthToCheck - 1]);

    int searchedDayOfWeek = 0;
    int firstDayOfCurrentMonth = dayOfWeek1Jan; // Първият ден на януари вече е известен и надграждаме него.
    for (int i = 0; i < monthToCheck - 1; i++)  // Месеците са в обхват януари до месеца преди въведения месец.
    {
        // Извеждаме от кой ден започва всеки месец и делим модулно на дните от седмицата(7):
        // cout << "FOR: Current Month is: " << months[i] << ". First Day Of Current Month is: " << firstDayOfCurrentMonth << " -  " << dayOfWeek[firstDayOfCurrentMonth] << endl;
        firstDayOfCurrentMonth += monthsSize[i] % 7;
        if (firstDayOfCurrentMonth >= 7) // ако остатъкът от модулното делене надвиши 7, приравняваме резултатите в firstDayOfCurrentMonth
        {
            firstDayOfCurrentMonth = firstDayOfCurrentMonth % 7;
        }
    }

    // След като излезем от FOR цикъла, firstDayOfCurrentMonth съдържа стойността на 1вия ден от месеца, който искаме да проверим:
    // cout << "OUTSIDE FOR - First day of monthToCheck: " << firstDayOfCurrentMonth << endl;

    // Следва да вземем остатъка от модулното деление и да разберем кой ден се пада въведената дата.
    searchedDayOfWeek = (firstDayOfCurrentMonth + (dayToCheck - 1)) % 7;
    // cout << "FINAL: searched day of the week: " << searchedDayOfWeek << endl;

    // Придаваме стойности на месеците и дните, равни на месеца, който се проверява и деня в който се пада съответната дата:
    cout << months[monthToCheck - 1] << " " << dayToCheck << " is in " << dayOfWeek[searchedDayOfWeek] << endl;

    return 0;
}