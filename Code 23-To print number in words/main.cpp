// To print number in words.
#include<iostream>
#include<string.h>
using namespace std;

int main(){
    int i;
    string str;
    cout<<"Enter the number";
    cin>>str;
    for(i=0;i<str.length();i++){
        switch (str[i]){
            case '0':
             cout<<"Zero";
             break;
            case '1':
             cout<<"One"<<endl;
             break;
            case '2':
             cout<<"Two"<<endl;
             break;
            case '3':
             cout<<"Three"<<endl;
             break;
            case '4':
             cout<<"Four"<<endl;
             break;
            case '5':
             cout<<"Five"<<endl;
             break;
            case '6':
             cout<<"Six"<<endl;
             break;
            case '7':
             cout<<"Seven"<<endl;
             break;
            case '8':
             cout<<"Eight"<<endl;
             break;
            case '9':
             cout<<"Nine"<<endl;
             break;
        }
    }
return 0;
}