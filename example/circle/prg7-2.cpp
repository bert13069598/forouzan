#include <iostream>

using namespace std;

class Circle {
private:
    double radius;
public:
    Circle(double radius);

    Circle();

    ~Circle();

    Circle(const Circle &circle);

    double getRadius() const;

    double getArea() const;

    double getPerimeter() const;
};

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