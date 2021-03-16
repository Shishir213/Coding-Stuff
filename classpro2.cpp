#include <iostream>
using namespace std;

class Employee
{
protected:
    int ID;

public:
    //multiple versions (definitions) of the function
    // This is a type of polimorphism called function overloading!
    // First version
    void display()
    {
        cout << "The employee id is: " << ID << "\n";
    }
    // Second version , over loaded version
    void display(string message)
    {
        cout << "The employee id is: " << ID << "\n";
        cout << message << "\n";
    }
};

class Manager : public Employee
{
public:
    //Third version , overridding base class function
    void display()
    {
        cout << "The employee id is: " << ID << "\n";
        cout << "But this display is of derived class!\n";
    }
    // Fourth version, overloading version
    void display(int yearsOfExperience)
    {
        cout << "The employee id is: " << ID << "\n";
        cout << "You are working here for " << yearsOfExperience << " and we thank you for that!\n";
    }
};

int main()
{
    // Write C++ code here
    cout << "Hello world!\n";
    Employee e = Employee();
    e.display();
    e.display("Hello there, good morning!");
    Manager m1 = Manager();
    m1.display(15);
    m1.display();

    return 0;
}