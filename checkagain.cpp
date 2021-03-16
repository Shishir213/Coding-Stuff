#include <iostream>
#include <conio.h>
#include<stdio.h>
using namespace std;
class Employee
{
    int ID;
    string name;
    public:
    double salary;
    Employee(){
        ID=10;
        name="Shishir Sharma";
        salary=46000;
    }
    void assign(int ID,string name,double salary){
        this->ID=ID;
        this->name=name;
        this->salary=salary;
    }
    void print(){
        cout<<ID<<"\n";
        cout<<name<<"\n";
        cout<<salary<<"\n";
    }
    void raisesalary(float percentage){
        salary=salary+(salary*(percentage/100));   
    }
};
int main(void){
    Employee ob;
    int ID;string name;double salary;
    cout<<"Enter ID:"<<"\n";
    cin>>ID;
    cout<<"Enter employee name:"<<"\n";
    cin>>name;
    cout<<"Enter employee salary"<<"\n";
    cin>>salary;
    ob.assign(ID,name,salary);
    ob.raisesalary(20.80);
    ob.print();
    return 0;
}