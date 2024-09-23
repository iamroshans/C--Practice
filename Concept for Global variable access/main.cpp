#include<iostream>
using namespace std;
int a=50;
int main(){
    int a=20;
    cout<<"The local value of a is: "<<a<<endl;
    cout<<"The global value of a is: "<<::a;
    return 0;
}   