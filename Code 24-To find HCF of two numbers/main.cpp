// To find HCF of two numbers.
#include<iostream>
using namespace std;

int main(){
    int HCF,num1,num2,i,min;
    cout<<"Enter the first number: "<<endl;
    cin>>num1;
    cout<<"Enter the second number: "<<endl;
    cin>>num2;
    min=(num1<num2)? num1:num2;
    for(i=min;i>=1;i--){
        if(num1%i==0 && num2%i==0){
            HCF=i;
            break;
        }
    }
    cout<<"The HCF is "<<HCF<<endl;
    return 0;
}