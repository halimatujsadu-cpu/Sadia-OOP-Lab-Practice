#include <iostream>
#include <string>
using namespace std;

class Course {
private:
    int courseId;
    string courseName;

public:
    void setCourseId(int courseId) {
        this->courseId = courseId;
    }

    void setCourseName(string courseName) {
        this->courseName = courseName;
    }

    int getCourseId() {
        return courseId;
    }

    string getCourseName() {
        return courseName;
    }

    virtual void displayCourseType() = 0;
    virtual ~Course() {}
};

class TheoryCourse : public Course {
public:
    void displayCourseType() {
        cout << "This is a Theory Course" << endl;
    }
};

class LabCourse : public Course {
public:
    void displayCourseType() {
        cout << "This is a Lab Course" << endl;
    }
};

int main() {
    Course *course;

    course = new TheoryCourse();
    course->setCourseId(101);
    course->setCourseName("OOP");

    cout << "Course ID: " << course->getCourseId() << endl;
    cout << "Course Name: " << course->getCourseName() << endl;
    course->displayCourseType();
    delete course;

    cout << endl;

    course = new LabCourse();
    course->setCourseId(102);
    course->setCourseName("OOP Lab");

    cout << "Course ID: " << course->getCourseId() << endl;
    cout << "Course Name: " << course->getCourseName() << endl;
    course->displayCourseType();
    delete course;

    return 0;
}
