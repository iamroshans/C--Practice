// To reverse string enter by user
#include<iostream>
#include<string.h>
using namespace std;

int main(){
    char str[20], rev[20];
    cout<<"Enter the string";
    cin>>str;
    int i,j=0;
    for(i=strlen(str)-1;i>=0;i--){
        rev[j]=str[i];
        j++;
    }
    rev[j]='\0';
    cout<<"The reversed string is "<<rev;
return 0;
}