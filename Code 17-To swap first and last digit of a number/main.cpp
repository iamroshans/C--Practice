// To swap first and last digit of a number.
#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int first,last,count,num,temp,swapped;
    // double swapped;
    cout<<"Enter the number : "<<endl;
    cin>>num;
    temp=num;
    last=num%10;
    count=(int)log10(num);
    while(num>=10){
        num=num/10;
    }
    first=num;
    swapped=(last*pow(10,count)+first)+(temp-((first*pow(10,count)+last)));
    cout<<"The first number of given number is "<<first<<endl;
    cout<<"The last number of given number is "<<last<<endl;
    cout<<"The swapped number of given number is "<<swapped<<endl;
    return 0;
}