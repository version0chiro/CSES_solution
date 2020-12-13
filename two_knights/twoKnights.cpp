#include <iostream>
#include <string>

using namespace std;

long long calc(long long i){
    return (i*i*(i*i-1)-8-24-(i-4)*16-16-24*(i-4)-8*(i-4)*(i-4));
}

int main(){
    long long n;
    // cout<<"Enter the value of N"<<endl;
    cin >>n;
    for(long long i =1;i<=n;i++){
        cout<<calc(i)/2<<endl;
    }
    return 0;
}