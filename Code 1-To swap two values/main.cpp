#include<iostream>
using namespace std;
int main(){
    int a=6,b=4,temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"The swapped values of a and b are "<<a<<","<<b;
    return 0;
}