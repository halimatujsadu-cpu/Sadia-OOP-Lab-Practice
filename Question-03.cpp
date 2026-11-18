#include <iostream>
using namespace std;

class Shape {
protected:
    double dimension;

public:
    Shape(double d) {
        dimension = d;
    }

    virtual double calculateArea() = 0;
    virtual ~Shape() {}
};

class Square : public Shape {
public:
    Square(double side) : Shape(side) {}

    double calculateArea() {
        return dimension * dimension;
    }
};

class Circle : public Shape {
public:
    Circle(double radius) : Shape(radius) {}

    double calculateArea() {
        return 3.1416 * dimension * dimension;
    }
};

int main() {
    double side, radius;
    cout << "Enter square side: ";
    cin >> side;
    cout << "Enter circle radius: ";
    cin >> radius;

    Square s(side);
    Circle c(radius);

    cout << "Square Area: " << s.calculateArea() << endl;
    cout << "Circle Area: " << c.calculateArea() << endl;
    return 0;
}
