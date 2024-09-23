#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n,temp1,temp2,remainder,c=0,i,sum=0;
    cout<<"Enter the n number upto which you want to get armstrong value :"<<endl;
    cin>>n;
    for(i=1;i<=n;i++){
        temp1=i;
        temp2=i;
        while(temp1!=0){
            temp1=temp1/10;
            ++c;   // No of digit calculation
        }
        while(temp2!=0){
            remainder=temp2%10;
            sum=pow(remainder,c)+sum; // Sum of digits calculation.
            temp2=temp2/10;
        }
        if(i==sum){
            cout<<i<<endl;
        }
        sum=0;
        c=0;
    }
return 0;
}