// To count the number of alphabets, string, and special characters in string.
#include<iostream>
using namespace std;
#define MAX_NUM 100 //Making constant MAX_NUM 100.
int main(){
    int alphabets,numbers,characters,i;
    alphabets=numbers=characters=i=0;
    char string[MAX_NUM];
    cout<<"Enter the string: "<<endl;
    cin>>string;
    while(string[i]!='\0'){
    if((string[i]>='a' && string[i]<='z')||(string[i]>='A' && string[i]<='Z')){
        ++alphabets;
        }
    else  if(string[i]>='0' && string[i]<='9'){
        ++numbers;
        }
    else{
            ++characters;
        }
        ++i;
    }
    cout<<"The alphabets in string is "<<alphabets<<endl<<"The numbers in string is "<<numbers<<endl<<"The special characters in string is"<<characters;
    return 0;
}