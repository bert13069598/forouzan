#include "circle.h"


Circle::Circle(double rds)
        : radius(rds) {
    cout << "param constructor" << endl;
}

Circle::Circle()
        : radius(0.0) {
    cout << "default constructor" << endl;
}

Circle::Circle(const Circle &circle)
        : radius(circle.radius) {
    cout << "copy constructor" << endl;

}

Circle::~Circle() {
    cout << "destructor" << endl;
}

double Circle::getRadius() const {
    return radius;
}

double Circle::getArea() const {
    const double PI = 3.14;
    return PI * radius * radius;
}

double Circle::getPerimeter() const {
    const double PI = 3.14;
    return 2 * PI * radius;
}