#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
class a
{
    private:
    string code;
    string grade;
    protected:
    string name;
    public:
    float phy;
    float mat;
    float che;
    a(){
        code="20BCE11007";
        grade= "A";
        name="Shishir";
        phy=12;
        mat=13;
        che=43;
    }
   void display(){
       cout<<"Name  :"<<name<<endl;
       cout<<"Grade  :"<<grade<<endl;
       cout<<"Code  :"<<code<<endl;
       cout<<"Physics  :"<<phy<<endl;
       cout<<"Chemistry  :"<<che<<endl;
       cout<<"Maths  :"<<mat<<endl;
   }
};
class b : public a
{
    public:
    void disp()
    {
        display();
        cout<<name<<endl;
        //cout<<grade<<endl;
        //cout<<code<<endl;
        cout<<phy<<endl;
        cout<<che<<endl;
        cout<<mat<<endl;
    }
};
class c : public b
{
    void disp1(){
        disp();
        display();
        //cout<<grade<<endl;
        //cout<<code<<endl;
        cout<<phy<<endl;
        cout<<che<<endl;
        cout<<mat<<endl;
        cout<<name<<endl;

    }
};
int main(){
    b b1;
    b1.disp();
    return 0;
}