// pure virtual functions, abstract class
#include <iostream>
using namespace std;

// virtual function - functiona declared as virtual in base classes, then overridden in derived classes. Runtime polimorphism.

// pure virtual function
class Shape
{//abstract, concept
    public : Shape(){​​​​}
    void virtual calculateArea() = 0;
    void virtual display() = 0; //abstract, pure virtual functions
} ​​​​;

class Circle : public virtual Shape{
    public:
    double radius, area;
    Circle(double radius) : Shape()
    {
        ​​​​
        this->radius = radius;
    }
    void virtual calculateArea()
    {
        ​​​​
        this->area = 3.14 * radius * radius;// pure virtual functions, abstract class
#include <iostream>
using namespace std;



// virtual function - functiona declared as virtual in base classes, then overridden in derived classes. Runtime polimorphism.



// pure virtual function
class Shape{​​​​//abstract, concept
public:
Shape(){​​​​}​​​​
void virtual calculateArea()=0;
void virtual display()=0;//abstract, pure virtual functions
}​​​​;



class Circle : public virtual Shape {​​​​
public:
double radius, area;
Circle(double radius):Shape(){​​​​
this->radius = radius;
}​​​​
void virtual calculateArea(){​​​​
this->area = 3.14*radius*radius;
}​​​​

void virtual display(){​​​​
cout<<"Area is: "<<this->area<<"\n";
}​​​​
}​​​​;



int main() {​​​​
Shape *s = NULL;
s = new Circle(10);//dynamic object, created in heap
s->calculateArea();
s->display();
return 0;
}​​​​
    }
    ​​​​

    void virtual display()
    {
        ​​​​
        cout << "Area is: " << this->area << "\n";
    }
    ​​​​
};

int main()
{
    ​​​​
    Shape *s = NULL;
    s = new Circle(10); //dynamic object, created in heap
    s->calculateArea();
    s->display();
    return 0;
}