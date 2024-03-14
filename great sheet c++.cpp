#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    int rollNumber;
    string name;
    float marks[5];

public:
    void getDetails();
    void calculatePercentage();
    void generateGreatSheet();
};

void Student::getDetails()
{
    cout << "Enter roll number of the student: ";
    cin >> rollNumber;
    cout << "Enter name of the student: ";
    cin >> name;
    cout << "Enter marks of 5 subjects: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> marks[i];
    }
}

void Student::calculatePercentage()
{
    float sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += marks[i];
    }
    float percentage = (sum / 500) * 100;
}

void Student::generateGreatSheet()
{
    cout << "*********************************" << endl;
    cout << "* Great Sheet for Student " << name << " *" << endl;
    cout << "*********************************" << endl;
    cout << "* Roll Number: " << rollNumber << "      *" << endl;
    cout << "* Name: " << name << "        *" << endl;
    cout << "* Marks:                     *" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "* Subject " << i + 1 << ": " << marks[i] << "      *" << endl;
    }
    cout << "* Percentage: "<< calculatePercentage() << " %  *" << endl;
    cout << "*********************************" << endl;
}

int main()
{
    Student s;
    s.getDetails();
    s.generateGreatSheet();
    return 0;
}
