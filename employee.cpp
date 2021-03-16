#include <iostream>
#include <conio.h>
using namespace std;
class employee
{
    string id;
    string name;
    float salary;
    public:
    employee(){
        id="20BCE11007"; 
        name="Shishir";
        salary=43220.5;
    }
    employee(string i,string nam,float sal){ 
        id=i;
        name=nam;
        salary=sal;
    }
    float raisesalary(){
        salary=salary+(salary*0.1);
        return salary;
    }
    void display(){
        cout<<"ID : "<<id<<endl;
        cout<<"Name : "<<name<<endl;
        cout<<"Salary : "<<salary<<endl;
    }
};
int main(){
    employee a1=employee("20BCE11012","Sahil",43433.3);
    a1.display();
    double sal=a1.raisesalary();
    cout<<"New Salary = "<<sal<<endl;
    return 0;
}
