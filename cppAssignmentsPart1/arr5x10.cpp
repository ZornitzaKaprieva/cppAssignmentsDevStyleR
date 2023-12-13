#include <iostream>
#include <cmath>
using namespace std;

/*Направете двумерен масив от 5х10 елемента (типа няма значение – int, char, string).
  Отпечатайте го във следните варианти:
	– Нормален табличен вид – 5 реда, 10 колони:
	– Отпечатайте същата таблицата така, че редовете да станат колони, а колоните редове.*/

int main()
{

	// Създаваме и попълваме таблицата, която следва да отпечатаме:
	int rows = 5;
	int cols = 10;
	int arr[rows][cols];
	int value = 10;

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = value;
			value++;
		}
	}

	cout << "Normal tabular view – 5 rows, 10 columns:" << endl;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	cout << "Rows become columns and columns become rows:" << endl;
	for (int i = 0; i < cols; i++)
	{
		for (int j = 0; j < rows; j++)
		{
			cout << arr[j][i] << " ";
		}
		cout << endl;
	}

	return 0;
}