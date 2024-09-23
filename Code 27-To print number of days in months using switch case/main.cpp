// To print number of days in a month using switch case.
// switch case doesnot support string.
#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter the month name for which you want number of days: "<<endl;
    cin>>a;
    switch(a){
        case 1:
            cout<<"Number of days is 31.";
            break;
        case 2:
            cout<<"Number of days is 28.";
            break;
        case 3:
            cout<<"Number of days is 31.";
            break;
        case 4:
            cout<<"Number of days is 30.";
            break;
        case 5:
            cout<<"Number of days is 31.";
            break;
        case 6:
            cout<<"Number of days is 30.";
            break;
        case 7:
            cout<<"Number of days is 31.";
            break;
        case 8:
            cout<<"Number of days is 31.";
            break;
        case 9:
            cout<<"Number of days is 30.";
            break;
        case 10:
            cout<<"Number of days is 31.";
            break;
        case 11:
            cout<<"Number of days is 30.";
            break;
        case 12:
            cout<<"Number of days is 31.";
            break;              
    }
return 0;
}