// To check even or odd using functions.
#include<iostream>
using namespace std;
int check(int b){
    if (b%2==0){
        cout<<"The given number is even"<<endl;
    }
    else{
        cout<<"The number is odd"<<endl;
    }
    return 0;
}
int main(){
    int a;
    cout<<"Enter the number: "<<endl;
    cin>>a;
    check(a);
    return 0;
}
// Alternative: use int iseven(int num); return !(num&1);