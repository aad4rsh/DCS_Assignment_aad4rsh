#include <iostream>
#include <cmath>
#include <cctype>
using namespace std;

double area(double radius)
{
    return M_PI * pow(radius, 2);
}

double area(double length, double breadth)
{
    return length * breadth;
}

int main() {
    double l, b, r;
    char area_char;

    cout << "Keko area chahincha (R for rectangle, C for circle)? ";
    cin >> area_char;

    area_char = tolower(area_char); 

    if (area_char == 'r')
    {
        cout << "Length ko value halnushosh: ";
        cin >> l;
        cout << "Breadth ko value halnushosh: ";
        cin >> b;
        cout << "Tapaile deko length, breadth anusar, Area: " << area(l, b) << endl;
    }
    else if (area_char == 'c')
    {
        cout << "Radius ko value halnuhosh: ";
        cin >> r;
        cout << "Tapaile deko radius anusar, Area: " << area(r) << endl;
    }
    else
    {
        cout << "Galat choice halnubhayo! (R or C halnush)" << endl;
    }

    return 0;
}
