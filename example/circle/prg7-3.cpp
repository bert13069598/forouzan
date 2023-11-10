#include "circle.h"


int main() {
    Circle circle1(5.0);
    cout << "R: " << circle1.getRadius() << endl;
    cout << "S: " << circle1.getArea() << endl;
    cout << "L: " << circle1.getPerimeter() << endl;
    Circle circle2(circle1);
    cout << "R: " << circle2.getRadius() << endl;
    cout << "S: " << circle2.getArea() << endl;
    cout << "L: " << circle2.getPerimeter() << endl;
    Circle circle3;
    cout << "R: " << circle3.getRadius() << endl;
    cout << "S: " << circle3.getArea() << endl;
    cout << "L: " << circle3.getPerimeter() << endl;
    return 0;
}