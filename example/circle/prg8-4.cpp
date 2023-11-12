#include "circle.h"


int main() {
    Circle circles[3];

    circles[0] = Circle(3.0);
    circles[1] = Circle(4.0);
    circles[2] = Circle(5.0);

    for (int i = 0; i < 3; i++) {
        cout << "R: " << circles[i].getRadius() << endl;
        cout << "S: " << circles[i].getArea() << endl;
        cout << "L: " << circles[i].getPerimeter() << endl;
    }
}