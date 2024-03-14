#include <iostream>
using namespace std;

class Student
{
private:
    int rollNumber;
    int marks[5];

public:
    void getRollNumber();
    void getMarks();
    void displayMarks();
};

void Student::getRollNumber()
{
    cout << "Enter roll number of the student: ";
    cin >> rollNumber;
}

void Student::getMarks()
{
    cout << "Enter marks of 5 subjects for student with roll number " << rollNumber << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Subject " << i + 1 << ": ";
        cin >> marks[i];
    }
}

void Student::displayMarks()
{
    cout << "Marks of student with roll number " << rollNumber << " are:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Subject " << i + 1 << ": " << marks[i] << endl;
    }
}

int main()
{
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    Student s[n];
    for (int i = 0; i < n; i++)
    {
        s[i].getRollNumber();
        s[i].getMarks();
    }

    for (int i = 0; i < n; i++)
    {
        s[i].displayMarks();
        cout << endl;
    }

    return 0;
}
