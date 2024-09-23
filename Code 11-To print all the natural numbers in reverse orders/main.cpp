// To print all the natural numbers in reverse orders.
#include<iostream>
using namespace std;

int main(){
    int n,i;
    cout<<"Enter the number upto which you want natural number: "<<endl;
    cin>>n;
    cout<<"The natural numbers upto given value are: "<<endl;

    for(i=1;i<=n;i++){
        cout<<i<<",";
    }
    cout<<"\nThe reverse of natural numbers are "<<endl;
    for(i=n;i>=1;i--){
        cout<<i<<",";
    }
return 0;
}
