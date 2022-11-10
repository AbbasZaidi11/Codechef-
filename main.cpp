#include <iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int gcd;
    int greater;
    if(a>b){
        greater=a;
    }
    else{
        greater=b;
    }
    for(int i{1};i<greater;i+=1){
        if(a%i==0 && b%i==0){
            gcd=i;
        }
    }
    cout<<gcd<<endl;
    return 0;
}