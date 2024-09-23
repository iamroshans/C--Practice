// A &setData(int a) returns a reference to the original object, enabling method chaining and avoiding object copies.
// A setData(int a) returns a copy of the object, which is less efficient and breaks method chaining.
#include <iostream>
using namespace std;
class A
{
    int a;

public:
    A &setData(int a)
    {
        this->a = a;
        return *this;
    }

    void getData()
    {
        cout << "The value of a is " << a << endl;
    }
};

int main()
{
    A a;
    a.setData(4).getData();
    return 0;
}
