#include <iostream>

using namespace std;

class Animal
{
public:
    int age;
    string gender;
    int b; // for 1 and 0

    void isMammal(int age, string gender)
    {
        cout << "Age of animal: " << age << "\n";
        cout << "Gender of animal: " << gender << "\n";
    };

    void mate(string message_1)
    {
        cout << "Can they Reproduce: " << message_1 << "\n";
    }
};

class Duck : public Animal
{
public:
    string beakColor = "yellow";
    void swim(string message_2)
    {
        cout << "Can duck swim: " << message_2 << "\n";
    };
    void quack()
    {
        cout << "The sound that a duck makes is quack"
             << "\n";
    };
};

class Fish : public Animal
{
public: //In UML "-" used but to call it we have to make it public
    int sizeInFt;
    bool canEat = true;
    void swim(string message_3)
    {
        cout << "The fish can swim: " << message_3 << "\n";
    };
};

class Zebra : public Animal
{
public:
    bool is_wild = true;
    float run(int speed)
    {
        cout << "How fast can a zebra run: " << speed << "\n";
    }
};

int main()
{
    Animal a = Animal();
    a.isMammal(8, "Female");
    a.mate("Yes");

    Duck d = Duck();
    d.swim("Yes");
    d.quack();

    Fish f = Fish();
    f.swim("Yes");

    Zebra z = Zebra();
    z.run(64.9);
}