// To find the LCM of given two numbers.
#include<iostream>
using namespace std;

int main(){
    int lcm,num1,num2,max,i;
    cout<<"Enter the first number: "<<endl;
    cin>>num1;
    cout<<"Enter the second number: "<<endl;
    cin>>num2;
    max=(num1>num2)? num1:num2;
    i=max;
    while(true){
        if(i%num1==0 && i%num2==0){
            lcm=i;
            break;
        }
        i+=max;
    }
    cout<<"The lcm is "<<lcm;
    return 0;
}