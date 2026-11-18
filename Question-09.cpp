#include <iostream>
using namespace std;

class Vehicle {
public:
    void vehicleInfo() {
        cout << "This is a vehicle." << endl;
    }
};

class Fare {
public:
    void fareInfo() {
        cout << "Transportation Fare: 50 taka" << endl;
    }
};

class Car : public Vehicle {
public:
    void carInfo() {
        cout << "This is a car." << endl;
    }
};

class Bus : public Vehicle, public Fare {
public:
    void busInfo() {
        cout << "This is a bus." << endl;
    }
};

int main() {
    Car c;
    Bus b;

    c.vehicleInfo();
    c.carInfo();

    b.vehicleInfo();
    b.fareInfo();
    b.busInfo();
    return 0;
}
