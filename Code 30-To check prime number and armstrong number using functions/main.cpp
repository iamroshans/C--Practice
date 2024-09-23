// To check prime number and armstrong number using functions.
#include<iostream>
using namespace std;
int pow(int ten,int count){
    int j=1;
    for(int i=0;i<count;i++){
        ten=ten*j;
    }
    return ten;
}
int primecheck(int num){
    int i,c=0;
    for(i=num;i>=1;i--){
        if(num%i==0){
            ++c;
        }
    }
    if(c>2){
        cout<<"The number is not prime number.";
    }
    else{
        cout<<"Prime Number.";
    }
    return 0;
}
int main(){
    int num,remainder,temp,sum=0,c=0;
    cout<<"Enter the number: "<<endl;
    cin>>num;
    temp=num;
    primecheck(num);
    while(temp!=0){
        ++c;
        remainder=temp%10;
        sum=sum*pow(10,c)+remainder;
        temp=temp/10;
    }
    if(num==sum){
        cout<<"The number is armstrong";
    }
return 0;
}