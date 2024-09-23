// To check whether a character is alphabet, digit or special character.
#include<iostream>
using namespace std;
int main(){
    char a;
    cout<<"Enter the character: ";
    cin>>a;
    if(((a>='a') && (a<='z'))||((a>='A') && (a<='z'))){
     cout<<"The given character is Alphabet";
    }
    else if (a>='0' && a<='9'){
    // else if ('0'<=a<='9'){
     cout<<"The given character is Number";
    }
    else{
     cout<<"The given character is special character";
    }
    return 0;
}