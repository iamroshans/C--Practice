// To print alphabets from a to z.
#include<iostream>
using namespace std;

int main(){
    int i,character;
    char a='a';
    do{
        cout<<a<<endl;
        character=int(a);
        character++;
        a=char(character);
    }while(a<='z');
    return 0;
}   