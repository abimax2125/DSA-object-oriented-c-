#include <iostream>
using namespace std;

class Factorial
{
private:
    unsigned long long int num;
    unsigned long long int factorial;

public:
    void getNumber();
    void calculateFactorial();
    void displayFactorial();
};

void Factorial::getNumber()
{
    cout << "Enter a positive integer: ";
    cin >> num;
}

void Factorial::calculateFactorial()
{
    factorial = 1;
    for (int i = 1; i <= num; i++)
    {
        factorial *= i;
    }
}

void Factorial::displayFactorial()
{
    cout << "The factorial of " << num << " is " << factorial << endl;
}

int main()
{
    Factorial f;
    f.getNumber();
    f.calculateFactorial();
    f.displayFactorial();
    return 0;
}
