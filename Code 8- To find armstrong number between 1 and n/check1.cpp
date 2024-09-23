#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a=153,temp1=a,temp2=a,c=0,sum=0,r;
    while(temp1!=0){
        temp1=temp1/10;
        ++c;
    }
    while(temp2!=0){
        r=temp2%10;
        sum=sum+pow(r,c);
        temp2=temp2/10;
    }
    if(sum==a){
    cout<<sum;
    }
    else{
        cout<<"not";
    }
return 0;
}