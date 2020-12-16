#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    long long n;
    cin>>n;
    int total = 0;
    for(int i=5;n/i>=1;i=i*5){
        total +=n/i;

    }
    cout<<total<<endl;
    return 0;
}