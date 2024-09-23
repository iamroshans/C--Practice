// To convert a string to lowercase.
// Use of strlwr() used for char.
#include<iostream>
#include<string.h>
using namespace std;

int main(){
    char string[20];
    int i=0;
    cout<<"Enter the string : "<<endl;
    cin>>string;
    cout<<strlwr(string);
    return 0;
    }