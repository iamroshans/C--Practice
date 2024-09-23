// To find the largest number among three numbers.
#include<iostream>
using namespace std;

int main(){
    int num1,num2,num3,max;
    cout<<"Enter the 3 number"<<endl;
    cin>>num1;
    cin>>num2;
    cin>>num3;
    max=num1;
    if(num2>max){
        max=num2;
    }
    if(num3>max){
        max=num3;
    }
    cout<<"The maximum number is: "<<max;
    return 0;
}