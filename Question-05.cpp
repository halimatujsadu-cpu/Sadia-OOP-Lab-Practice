#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string name;
    int age;

    void displayPersonInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Employee : public Person {
public:
    int employeeId;
    double salary;

    void displayEmployeeInfo() {
        displayPersonInfo();
        cout << "Employee ID: " << employeeId << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Employee e;
    e.name = "Rahim";
    e.age = 25;
    e.employeeId = 1001;
    e.salary = 30000;

    e.displayEmployeeInfo();
    return 0;
}
