// To check whether a number is palindrome.
#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int temp,num,remainder,reverse=0;
    cout<<"Enter the number: "<<endl;
    cin>>num;
    temp=num;
    while(num!=0){
        remainder=num%10;
        reverse=reverse*10+remainder;
        num=num/10;
    }
    if(temp==reverse){
        cout<<"Given number is palindrome";
    }
    else{
        cout<<"Not Palindrome";
    }
return 0;
}