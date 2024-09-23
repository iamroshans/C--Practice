#include<iostream>
using namespace std;

int main(){
    cout<<sizeof(35)<<endl;//takes as int. 
    cout<<sizeof(35.95)<<endl; //takes as double by default
    cout<<sizeof(35.6f)<<endl; //takes as float 
    cout<<sizeof(35.6l)<<endl;//takes as long double 
    return 0;
}