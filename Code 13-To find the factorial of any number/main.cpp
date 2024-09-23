// To find the factorial of any number.
#include<iostream>
using namespace std;

int main(){
    int a=1,i,n;
    cout<<"Enter the number for which you want the factorial: "<<endl;
    cin>>n;
    for(i=1;i<=n;i++){
        a=i*a;
    }
    cout<<"The factorial of given number n is:"<<a;
return 0;
}