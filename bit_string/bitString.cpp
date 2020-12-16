#include <iostream>
#include <bits/stdc++.h>
using namespace std;


long int power(long long  b,long long p, long long md){
    long long ans = 1;
    for (long long i=0;i<p;i++)ans = ans*b%md;
    return ans;
}

int main(){
    long long n;
    cin>>n;
    cout<<power(2,n,1e9+7);
    // unsigned long P = (unsigned  long)p;
    // cout<<p<<endl;
    return 0;
}