#include <iostream>

using namespace std;

class Circle {
private:
    double radius;
public:
    double getRadius() const;

    double getArea() const;

    double getPerimeter() const;

    void setRadius(double value);
};

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

void Circle::setRadius(double value) {
    radius = value;
}

int main() {
    Circle circle1{};
    circle1.setRadius(10.0);
    cout << "R: " << circle1.getRadius() << endl;
    cout << "S: " << circle1.getArea() << endl;
    cout << "L: " << circle1.getPerimeter() << endl;

    return 0;
}