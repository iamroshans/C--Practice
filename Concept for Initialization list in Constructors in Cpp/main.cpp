#include<iostream>
using namespace std;
/*
Syntax for initialization list in constructor:
constructor (argument-list) : initilization-section
{
    assignment + other code;
}*/
class Test
{
    int a;
    int b;

public:
    // Test(int i, int j) : b(j), a(i+b) ,this won't run.
    // Test(int i, int j) : a(i), b(a + j) , this will run since a is written first and it is initialized first and then b.
    Test(int i, int j) : a(i), b(j)
    {
        cout << "Constructor executed"<<endl;
        cout << "Value of a is "<<a<<endl;
        cout << "Value of b is "<<b<<endl;
    }
};

int main()
{
    Test t(4, 6);

    return 0;
}
