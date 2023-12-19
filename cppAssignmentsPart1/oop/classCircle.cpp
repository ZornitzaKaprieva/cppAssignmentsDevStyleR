#include <iostream>
#include <cmath>
using namespace std;

/*Да се създаде клас Circle с параметър радиус.
Да се включи една функция за изчисляване на площта и една за изчисляване на обиколката.*/

class Circle
{
public:
    Circle(int _radius) // първи конструктор
    {
        this->radius = _radius;
    }

    Circle() // втори конструктор
    {
    }

    // setter area
    void setArea(double _radius)
    {
        if (radius <= 0)
        {
            cout << "The radius cannot be 0 or negative number!" << endl;
        }
        else
        {
            double area = M_PI * radius * radius;
            this->radius = _radius;
        }
    }

    // getter area:
    double getArea()
    {
        return M_PI * radius * radius;
    }

    // setter perimeter:
    void setPerimeter(double _radius)
    {
        if (radius <= 0)
        {
            cout << "The radius cannot be 0 or negative number!" << endl;
        }
        else
        {
            double perim = 2 * M_PI * radius;
            this->radius = _radius;
        }
    }

    // getter perimeter:
    double getPerimeter()
    {
        return 2 * M_PI * radius;
    }

    // Изчисляване на площта чрез формулата S = π * r*r (за първи конструктор)
    void calculateArea()
    {
        if (radius <= 0)
        {
            cout << "The radius cannot be 0 or negative number!" << endl;
        }
        else
        {
            double area = M_PI * radius * radius;
            cout << "The radius of the circle is " << area << endl;
        }
    }

    // Изчислване на обиколката чрез формулата С = 2*π*r (за първи конструктор)
    void calculatePerimeter()
    {

        if (radius <= 0)
        {
            cout << "The radius cannot be 0 or negative number!" << endl;
        }
        else
        {
            double perim = 2 * M_PI * radius;
            cout << "The perimeter of the circle is " << perim << endl;
        }
    }

    // Въвеждане на стойност от потребител (за втори конструктор)

    void setValue()
    {
        do
        {
            cout << "Enter radius: ";
            cin >> radius;

            if (radius <= 0)
            {
                cout << "The radius cannot be 0 or negative number!" << endl;
            }

        } while (radius <= 0);
    }

    // Принтиране на резултатите с въведена от потребителя стойност (за втори конструктор)
    void printResult()
    {
        double area = M_PI * radius * radius;
        cout << "The area of the circle is " << area << endl;
        double perim = 2 * M_PI * radius;
        cout << "The perimeter of the circle is " << perim << endl;
    }

private:
    double radius;
};

int main()
{

    Circle circle1(3); // с първи конструктор
    circle1.calculateArea();
    circle1.calculatePerimeter();
    cout << circle1.getArea() << endl;
    cout << circle1.getPerimeter() << endl;
    circle1.setArea(10);
    cout << "Area: " << circle1.getArea() << endl;
    circle1.setPerimeter(2);
    cout << "Perimeter: " << circle1.getPerimeter() << endl;

    Circle circle2; // с втори конструктор
    circle2.setValue();
    circle2.printResult();

    return 0;
}
