// Dynamic objects
#include <iostream>
using namespace std;

class Student
{
public:
    int ID;
    Student()
    {
        ID = 12;
    } // Empty constructor
    void display()
    {
        cout << "ID is: " << ID << "\n";
    }
};

int main()
{
    Student *s = NULL;
    s = new Student();
    s->display();
    delete s;
    s->display();
    return 0;
}