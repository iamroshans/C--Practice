#include <iostream>
using namespace std;

class Base
{
protected:
    int a;

private:
    int b;
};

class Derived : protected Base
{
public:
    void setdata()
    {
        cin >> a;
    }
    void getdata()
    {
        cout << "The number is: " << a;
    }
};

int main()
{
    Base b;
    Derived d;
    // cout<<d.a; // Will not work since a is protected in both base as well as derived class
    d.setdata(); //can be accessed from func of derived
    d.getdata(); //can be accessed from func of derived
    return 0;
}
