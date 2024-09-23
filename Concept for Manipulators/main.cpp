// setw(n) provides the space based on n value.
#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int a=50,b=29,c=49;
    cout<<"The value of a without setw() :"<<a<<endl;
    cout<<"The value of b without setw() :"<<b<<endl;
    cout<<"The value of c without setw() :"<<c<<endl;
    cout<<"The value of a with setw(5) :"<<setw(5)<<a<<endl;
    cout<<"The value of b with setw(5) :"<<setw(5)<<b<<endl;
    cout<<"The value of c with setw(5) :"<<setw(5)<<c<<endl;
    return 0;
}