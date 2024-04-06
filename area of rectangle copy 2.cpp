#include<iostream>
using namespace std;
class;
double area(double radius)
{
    return 3.14 * radius * radius;
}

double area(double base, double height)
{
    return (base * height) / 2;
}
double area(double length, double breadth,double x99)
{
    return length * breadth;
}

int main()
{
    double r, b, h, l, w;
    cout << "Enter the radius of the circle: ";
    cin >> r;
    cout << "The area of the circle is: " << area(r) << endl;
    cout << "Enter the base and height of the triangle: ";
    cin >> b >> h;
    cout << "The area of the triangle is: " << area(b, h) << endl;
    cout << "Enter the length and breadth of the rectangle: ";
    cin >> l >> w;
    cout << "The area of the rectangle is: " << area(l, w) << endl;
    return 0;
}