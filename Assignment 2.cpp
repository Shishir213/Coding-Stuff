#include <iostream>
using namespace std;
class Animal{
    int age;
    string gender;
    public:
    void input(int a,string b){
        age=a;
        gender=b;
        cout<<"The age of Animal :"<<age<<endl;
        cout<<"The gender of Animal :"<<gender<<endl;
    }
    void ismammal(char s){
        if(s=='Y'||s=='y')
        cout<<"It is a Mammal."<<endl;
        else if(s=='N'||s=='n')
        cout<<"It is not a Mammal."<<endl;
        else
        cout<<"Invalid Input."<<endl;
    }
    void mate(char m){
        if(m=='Y'||m=='y')
        cout<<"They can Reproduce."<<endl;
        else if(m=='n'||m=='N')
        cout<<"They cannot Reproduce."<<endl;
        else
        cout<<"Invalid Input"<<endl;
    }
};
class duck : public Animal{
    public:
    string beakColor ="Yellow";
    void swim(){
        cout<<"The Duck's beak is "<<beakColor<<"."<<endl;
        cout<<"Ducks can Swim."<<endl;
    }
    void quack(){
        cout<<"The Duck makes a quacking noise."<<endl;
    }
};
class fish : virtual public Animal{
    int sizeInFt;
    bool canEat;
    public:
    virtual void input(double f,bool b){
        cout<<"The size of the Fish is "<<f<<" Feet."<<endl;
        if(b==true)
        cout<<"Yes. A fish can Eat."<<endl;
        else if(b==false)
        cout<<"No. It cannot Eat."<<endl;
    }
    void swim(){
        cout<<"A Fish can Swim."<<endl;
    }
};
class zebra : public Animal{
    public:
    bool isWild=true;
    void run(){
        if(isWild==true)
        cout<<"The zebra is a Wild Animal."<<endl;
        else if(isWild==false)
        cout<<"The zebra is not a Wild Animal."<<endl;
        cout<<"A Zebra runs at 65 km/hr."<<endl;
    }
};
int main(){
    duck d;fish f;zebra z;
    Animal *a=&f;
    cout<<"Duck  :"<<endl;
    d.input(5,"Female");
    d.ismammal('n');
    d.mate('y');
    d.swim();
    d.quack();
    cout<<"Fish  :"<<endl;
    a->input(2,"Male");
    f.input(0.21,true);
    f.ismammal('n');
    f.mate('y');
    f.swim();
    cout<<"Zebra  :"<<endl;
    z.input(3,"Male");
    z.ismammal('y');
    z.mate('y');
    z.run();
    return 0;
}