#include <iostream>
using namespace std;

struct Base
{
    virtual void Foo()
    {
        cout << "Base class method" << endl;
    }
};

struct Derived : public Base
{
    void Foo()
    {
        cout << "Derived class method" << endl;
    }
};


int main()
{
    Base b[] = {Base(), Derived(), Base()};

    for (int i = 0; i < 3; ++i)
    {
        b[i].Foo();
    }

}