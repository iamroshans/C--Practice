// To create calculator using switch statement.
#include<iostream>
using namespace std;

int main(){
    float num1,num2;
    char oper;
    cout<<"Enter the first number :";
    cin>>num1;
    cout<<"Enter the second number :";
    cin>>num2;
    cout<<"Enter the operator :";
    cin>>oper;
    switch (oper)
    {
    case '+':
        cout<<(num1+num2)<<endl;
        break;
    case '-':
        cout<<(num1-num2)<<endl;
        break;
    case '*':
        cout<<(num1*num2)<<endl;
        break;
    case '/':
        cout<<(num1/num2)<<endl;
        break;
    default:
        break;
    }
return 0;
}