#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
class professor
{
    string num;
    public:
    string name;
    float salary;
    string code;
    string batch;
    int ch;
    string pos;
    professor(){
        name="Raj Verma";
        salary=48900.0;
        code="A12";
        batch="D11+D12+D13";
        ch=7;
        pos="Senior Professor";
        num="7007067662";
    }
    void assign(string nu,string n,float sal,string c,string b,string position){
        num=nu;
        name=n;
        salary=sal;
        code=c;
        batch=b;
        pos=position;
    }
    void raisesalary(){
        if((ch>=4) && (ch<6))
        salary=salary+(salary*0.1);
        else if((ch>=6) && (ch<=8))
        salary=salary+(salary*0.2);
        cout<<"New Salary : "<<salary<<endl;
    }
    void display(){
        cout<<"Name : "<<name<<endl;
        cout<<"Salary  : "<<salary<<endl;
        cout<<"Teacher Code : "<<code<<endl;
        cout<<"Batch  : "<<batch<<endl;
        cout<<"Designation : "<<pos<<endl;
        cout<<"Phone Number : "<<num<<endl;
    }
    void assignch(){
        if(pos.compare("Senior Professor")==0)
        ch=8;
        else if(pos.compare("Assistant Professor")==0)
        ch=6;
        else
        ch=4;
        cout<<"Total Class Hours : "<<ch<<endl;
    }
};
int main(void){
    char c;
    professor ob;
    cout<<"Do you want to enter new data ? (Y/N)"<<endl;
    cin>>c;
    if((c=='Y') || (c=='y'))
    {
        string nu;string n;int sal;string c;string b;string position;
        cout<<"Enter Name : "<<endl;
        getline(cin.ignore(),n);
        cout<<"Enter Salary : "<<endl;
        cin>>sal;
        cout<<"Enter Your Code : "<<endl;
        getline(cin.ignore(),c);
        cout<<"Enter The Batch : "<<endl;
        getline(cin,b);
        cout<<"Enter Designation : "<<endl;
        getline(cin,position);
        cout<<"Enter Phone Number : "<<endl;
        getline(cin,nu);
        ob.assign(nu,n,sal,c,b,position);
        ob.display();
        ob.assignch();
        ob.raisesalary();
    }
    else if((c=='N') || (c=='n'))
    {
        ob.display();
        ob.assignch();
        ob.raisesalary();
    }
    return 0;
}