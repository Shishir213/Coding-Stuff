// pure virtual functions, abstract class
#include <iostream>
#include <cmath>
using namespace std;

// virtual function - functiona declared as virtual in base classes, then overridden in derived classes. Runtime polimorphism.

// pure virtual function
class Shape
{ //abstract, concept, //interface
public:
    double area;
    Shape() {}
    void virtual calculateArea() = 0;
    void virtual display() = 0; //abstract, pure virtual functions
};

class Circle : public virtual Shape
{
public:
    double radius;
    Circle(double radius) : Shape()
    {
        this->radius = radius;
    }
    void virtual calculateArea()
    {
        area = 3.14 * radius * radius;
    }

    void virtual display()
    {
        cout << "Area is: " << area << "\n";
    }
};

class Triangle : public virtual Shape
{
public:
    double base, height, hypotenuse;
    Triangle(double base, double height, double hypotenuse) : Shape()
    {
        this->base = base;
        this->height = height;
        this->hypotenuse = hypotenuse;
    }
    void virtual calculateArea()
    {
        double s = (base + height + hypotenuse) / 2;
        area = sqrt(s * (s - base) * (s - height) * (s - hypotenuse));
    }

    void virtual display()
    {
        cout << "Area is: " << area << "\n";
    }
};

class Cone : public virtual Circle, public virtual Triangle
{
public:
    Cone(double radius, double height, double hypotenuse) : Circle(radius), Triangle(radius, height, hypotenuse)
    {
    }
    ~Cone()
    {
        cout << "I am now in Cone destructor\n";
    }
    void virtual calculateArea()
    {
        this->area = 3.14 * radius * hypotenuse + 3.14 * radius * radius;
    }

    void virtual display()
    {
        cout << "Area is: " << this->area << "\n";
    }
};

int main()
{
    Shape *s = NULL;
    s = new Circle(3); //dynamic object, created in heap
    s->calculateArea();
    s->display();

    s = new Triangle(3, 4, 5);
    s->calculateArea();
    s->display();

    s = new Cone(3, 4, 5);
    s->calculateArea();
    s->display();

    delete s;

    return 0;
}

#include <iostream>
using namespace std;
class Employee
{ //abstract class
    string name;
    string id;
    public:
    int nop;
    double salary;
    Employee(string name, string id, double salary,int nop)
    {
        this->name = name;
        this->id = id;
        this->salary = salary;
        this->nop=nop;
    }
    void display()
    {
        cout << "ID :" << id << endl;
        cout << "Name :" << name << endl;
        cout << "Salary :" << salary << endl;
    }
    virtual double calculateSalary() = 0; //abstract function definition
};
class Manager : public Employee
{
    string name;
    string id;
    double salary;

public:
    double calculateSalary()
    {
        salary = salary + (salary * 0.5);
    }
};
class Department
{
public:
    int ID;
    string name;
    Department(int ID, string name)
    {
        this->ID = ID;
        this->name = name;
    }
    virtual void appraiseEmployee(Employee *) = 0;
};
class HRDepartment : public Department{
    public:
    HRDepartment(int ID,string name):Department(ID,name){}
    void appraiseEmployee(Employee *e){
        if(e->nop>=1 && e->nop<=3)
        e->salary=e->salary+(e->salary*0.2);
        else if(e->nop>=4 && e->nop<=6)
        e->salary=e->salary+(e->salary*0.4);
        else if(e->nop>=7 && e->nop<=10)
        e->salary=e->salary+(e->salary*0.8);
    }
};
class HRDepartment : public Department{
    public:
    HRDepartment(int ID,string name):Department(ID,name){}
    void appraiseEmployee(Employee *e){
        if(e->nop==0)
        throw("Number of Projects is 0.Therefore, Salary cannot be raised.");
        if(e->nop>=1 && e->nop<=3)
        e->salary=e->salary+(e->salary*0.2);
        else if(e->nop>=4 && e->nop<=6)
        e->salary=e->salary+(e->salary*0.4);
        else if(e->nop>=7 && e->nop<=10)
        e->salary=e->salary+(e->salary*0.8);
    }
};