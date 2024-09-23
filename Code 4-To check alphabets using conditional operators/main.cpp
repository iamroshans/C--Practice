// To check alphabets using conditional operators.
#include<iostream>
#include<string.h>
using namespace std;

int main(){
    char a;
    string b;
    cout<<"Enter the character"<<endl;
    cin>>a;
    // b= (('a'<=a<='z')||('A'<=a<='Z'))? "Given character is Albhabet" : "Given character is not alphabet"; "This is not choosen in c++ as it causes confusion while 'a'<=a<='z' is checked as it is not operated like we think in mathematics "
    b= ((a>='a' && a<='z')||(a>='A' && a<='Z'))? "Given character is Albhabet" : "Given character is not alphabet";
    cout<<b;
    return 0;
}