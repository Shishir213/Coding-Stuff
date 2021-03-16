// Online C++ compiler to run C++ program online
using namespace std;
#include <iostream>

class Employee
{
    ​​
private: // scope, visibility, accessibility
    // 3 data-attribute,property , 4 functions, methods
protected:
    double salary;
    void raiseSalary()
    {
        ​​
        salary = salary + (salary * 0.1);
    }
    ​​
public:
    int ID;
    string name;

    //constructor - allocates memory -
    Employee(int tID, string tName, double tSalary)
    {
        ​​
        ID = tID;
        name = tName;
        salary = tSalary;
        cout << "I am here, employee constructor is called!"
             << "\n";
    }
    ​​

    //Destructor - return memory - deletion of objects
    ~Employee()
    {
        ​​
        cout << "I am called to delete employee objects\n";
    }
    ​​

    void display()
    {
        ​​
        cout << "Employee ID is: " << ID << "\n";
        cout << "Employee name is: " << name << "\n";
        cout << "Employee salary is: " << salary << "\n";
    }
    ​​
} ​​;
// inheritance - reuse - is a type of Employee
class Manager : public Employee{​​
                                // redefine
                                public :
                                    Manager(int tID, string tName, double tSalary) : Employee(tID, tName, tSalary){​​
                                                                                                                       cout
                                                                                                                   << "I am here, manager constructor is called!"
                                                                                                                   << "\n";
}
​​
~Manager()
{
    ​​
    cout << "I am called to delete manager objects\n";
}
​​
}
​​;

int main()
{
    ​​
    // Write C++ code here
    cout << "Hello world!"
         << "\n";

    Employee e1 = Employee(1, "Harsha", 200000);
    e1.display();
    //e1.raiseSalary();
    Manager m1 = Manager(2, "Abimanyu", 300000);
    m1.display();

    return 0;
}
​​