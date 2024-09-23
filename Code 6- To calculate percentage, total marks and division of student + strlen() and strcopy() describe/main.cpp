// To calculate percentage, total marks and division of student.
/*strlen()
Purpose: It calculates the length of a C-style string (i.e., it counts the number of characters in a string before the null terminator \0).
Syntax:
size_t strlen(const char* str);
strcpy()
Purpose: Copies the contents of one C-style string into another.

Syntax:
char* strcpy(char* destination, const char* source);
*/
#include<iostream>
using namespace std;

int main(){
    int i,subjectnum,b;
    cout<<"Enter the number of subjects"<<endl;
    cin>>subjectnum;
    float marks,Tmarks=0,percentage;
    for(i=1;i<=subjectnum;i++){
        cout<<"Enter the marks for "<<subjectnum<<" subjects"<<endl;
        cin>>
        marks;
        Tmarks=marks+Tmarks;
    }
    cout<<"Total marks is:"<<Tmarks<<endl;
    percentage=(Tmarks/(subjectnum*100))*100;
    cout<<"Percentage is: "<<percentage<<endl;
    if(percentage>=80 && percentage<=100){
        cout<<"It is Distinction";
    }
    else if(percentage<80 && percentage>=65){
        cout<<"First division";
    }
    else if(percentage<65 && percentage>=50){
        cout<<"Second division";
    }
    else if(percentage<50 && percentage>32){
        cout<<"Third division";
    }
    else {
        cout<<"Failed";
    }
    return 0;
}