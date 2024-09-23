// To compare the two string using strcmp().
#include<iostream>
#include<string.h>
using namespace std;

int main(){
    char a[50],b[40];
    cout<<"Enter the 1st string: "<<endl;
    cin>>a;
    cout<<"Enter the 2nd string: "<<endl;
    cin>>b;
    int result=strcmp(a,b);
    if(result==0){
        cout<<"a is equal to b string."<<endl;
    }
    else{
        cout<<"a is not equal to b string."<<endl;

    }
return 0;
}