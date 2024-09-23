// To concatenate two strings.
/* strcat():

Return Value:-
Returns a pointer(in the form of num=&a and num is a pointer to a) to the destination string (dest)
the strcat() function appends the content of the second string to the end of the first string. It updates the first string in place rather than creating a new string object. */
#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char a[50],b[39],c[60];
    cout<<"Enter the first string"<<endl;
    cin>>a;
    cout<<"Enter the second string"<<endl;
    cin>>b;
    cout<<strcat(a,b);
return 0;
}