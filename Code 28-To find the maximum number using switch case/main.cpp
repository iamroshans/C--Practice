// To find the maximum number using switch case.
#include<iostream>
using namespace std;

int main(){
    int num1,num2;
    cout<<"Enter the first number: "<<endl;
    cin>>num1;
    cout<<"Enter the second number: "<<endl;
    cin>>num2;
    switch(num1>num2){
        case 1:
            cout<<"first number is greater than another.";
            break;
        case 0:
            cout<<"second number is greater than first one";
            break;
    }
return 0;
}