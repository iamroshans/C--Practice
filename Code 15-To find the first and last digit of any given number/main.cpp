// To find the last and first digit of any given number.
#include<iostream>
using namespace std;

int main(){
    int num,first,last;
    cout<<"Enter the number"<<endl;
    cin>>num;
    last=num%10;
    while(num!=0){
     num=num/10;
     if(num>=1 && num<=9){
        cout<<"The first number is: "<<num<<endl;
     }
    }
    cout<<"The last number is: "<<last;
    return 0;
}